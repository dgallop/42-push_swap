/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgallo-p <dgallo-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:39:51 by dgallo-p          #+#    #+#             */
/*   Updated: 2021/11/22 12:25:48 by dgallo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s,
			unsigned int start, size_t len)
{
	char	*new;
	size_t	i;
	size_t	j;

	if (s == '\0')
		return (0);
	if (ft_strlen(s) < len)
		new = malloc(sizeof(*s) * (ft_strlen(s) + 1));
	else
		new = malloc(sizeof(*s) * (len + 1));
	if (!new)
		return (0);
	i = 0;
	j = 0;
	while (s[i] && j < len)
	{
		if (i >= start)
			new[j++] = s[i];
		i++;
	}
	new[j] = '\0';
	return (new);
}
