/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 14:22:27 by agautier          #+#    #+#             */
/*   Updated: 2016/11/25 15:16:49 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	j = (int)ft_strlen(s1);
	while (s2[i])
	{
		s1[j++] = s2[i];
		i++;
	}
	s1[j] = '\0';
	return (s1);
}
