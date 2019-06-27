/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algautie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 16:05:01 by algautie          #+#    #+#             */
/*   Updated: 2019/06/27 14:22:44 by algautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	conv_c(t_pf *pf)
{
	char arg;

	arg = (char)va_arg(pf->args, int);
	if (arg)
		pf->len += 1;
	else
	{
		pf->error = 1;
		return ;
	}
	if (pf->width > 1)
	{
		pf->len += pf->width;
		if (pf->preflag_minus)
			write(1, &arg, 1);
		while (--pf->width)
			write(1, " ", 1);
	}
	if (!pf->preflag_minus)
		write(1, &arg, 1);
}
