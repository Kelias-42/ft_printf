/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algautie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 11:44:09 by algautie          #+#    #+#             */
/*   Updated: 2019/09/18 13:15:08 by algautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_printf(const char *format, ...)
{
	t_pf	*pf;
	int		ret;

	if (!(pf = (t_pf*)malloc(sizeof(t_pf))))
		return (-1);
	if (format)
	{
		init_struct(pf, format);
		va_start(pf->args, format);
		parse(pf);
		va_end(pf->args);
	}
	if (pf->error)
		ret = -1;
	else
		ret = pf->len;
	free(pf);
	return (ret);
}
