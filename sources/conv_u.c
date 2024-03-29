/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_u.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algautie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 15:52:28 by algautie          #+#    #+#             */
/*   Updated: 2019/09/19 12:10:24 by algautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static unsigned long long	get_arg(t_pf *pf)
{
	unsigned long long arg;

	if (pf->flag == NONE)
		arg = va_arg(pf->args, unsigned int);
	if (pf->flag == H)
		arg = (unsigned short)va_arg(pf->args, unsigned int);
	if (pf->flag == HH)
		arg = (unsigned char)va_arg(pf->args, unsigned int);
	if (pf->flag == L)
		arg = va_arg(pf->args, unsigned long);
	if (pf->flag == LL)
		arg = va_arg(pf->args, unsigned long long);
	return (arg);
}

static void					print_width(t_pf *pf, char *str)
{
	char	c;
	int		len;

	len = (int)ft_strlen(str);
	if (len == 1 && str[0] == '0' && pf->width > 0 && pf->precision == 0)
		pf->width += 1;
	c = pf->preflag_zero ? '0' : ' ';
	while (pf->width > ft_biggest(pf->precision, len))
	{
		write(1, &c, 1);
		pf->width--;
		pf->len++;
	}
}

static void					print_precision(t_pf *pf, char *str)
{
	int len;
	int precision;

	precision = pf->precision;
	len = ft_strlen(str);
	pf->len += len;
	while (precision > len)
	{
		write(1, "0", 1);
		pf->len++;
		precision--;
	}
	if (!(ft_strlen(str) == 1 && str[0] == '0' && pf->precision == 0))
		ft_putstr(str);
	else
		pf->len--;
}

void						conv_u(t_pf *pf)
{
	char *str;

	if (!(str = ft_ulltoa_base(get_arg(pf), 10)))
		pf->error = 1;
	if (pf->error)
		return ;
	pf->preflag_minus == 1 ? print_precision(pf, str) : print_width(pf, str);
	pf->preflag_minus == 0 ? print_precision(pf, str) : print_width(pf, str);
	if (str)
		free(str);
}
