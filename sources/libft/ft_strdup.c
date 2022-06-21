/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgallo-p <dgallo-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:33:50 by dgallo-p          #+#    #+#             */
/*   Updated: 2021/11/12 11:09:27 by dgallo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str2;
	int		i;

	i = 0;
	str2 = malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!str2)
		return (0);
	while (s1[i])
	{
		str2[i] = ((char *)s1)[i];
		i++;
	}
	str2[i] = '\0';
	return (str2);
}
