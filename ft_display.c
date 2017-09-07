/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 02:18:24 by agautier          #+#    #+#             */
/*   Updated: 2017/09/05 06:00:29 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_display(t_printf st, char *format)
{
	int j;

	st->i = -1;
	j = 0;
	while (format[++st->i] != '%' && format[st->i] != '\0')
		ft_putchar(format[st->i]);
	if (format[st=>i++] == '%')
	{
		ft_detect(st);
	}
	return (0);
}
