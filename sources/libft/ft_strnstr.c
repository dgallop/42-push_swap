/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgallo-p <dgallo-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:45:41 by dgallo-p          #+#    #+#             */
/*   Updated: 2021/11/12 11:10:04 by dgallo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len2;
	char	*new;

	i = 0;
	j = 0;
	new = (char *)haystack;
	len2 = ft_strlen(needle);
	if (len2 == 0 || haystack == needle)
		return (new);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (new[i + j] && new[j]
			&& new[i + j] == needle[j] && i + j < len)
			j++;
		if (j == len2)
			return (new + i);
		i++;
	}
	return (0);
}
