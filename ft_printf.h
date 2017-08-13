/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 10:48:44 by agautier          #+#    #+#             */
/*   Updated: 2017/08/11 03:56:51 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

#include <stdarg.h>
#include "./libft/libft.h"

int			ft_printf(const char *format, ...);
char		*ft_detect(char *str);
int			ft_display(char *format);

/*typedef struct		s_print
{
	flags
	conv
	prec
	modif
}					t_print;
*/
#endif
