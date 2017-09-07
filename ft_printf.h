/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 10:48:44 by agautier          #+#    #+#             */
/*   Updated: 2017/09/07 22:28:36 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

#include <stdarg.h>
#include <stdlib.h>
#include "./libft/libft.h"


#include <stdio.h>

enum				e_conver
{
	S,
	P,
	D,
	I,
	O,
	U,
	X,
	C,
};

enum				e_modif
{
	HH,
	H,
	L,
	LL,
	J,
	Z,
};

typedef struct		s_flags
{
	int				pound;
	int				plus;
	int				minus;
	int				zero;
	int				space;
}					t_flags;

typedef struct		s_printf
{
	t_flags			*flags;
	va_list			ap;
	int				i;
	int				ret;
	int				preci;
	int				width;
	enum e_conver	conver;
	enum e_modif	modif;
}					t_printf;

int					ft_printf(char *format, ...);
t_printf			*ft_detect(t_printf *st);
t_printf			*ft_display(t_printf *st, const char *format);

#endif