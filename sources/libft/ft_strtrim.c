/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgallo-p <dgallo-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:34:09 by dgallo-p          #+#    #+#             */
/*   Updated: 2021/11/12 11:20:20 by dgallo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_start(char const *s1, char const *set, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[i]) == 0)
			return (i);
		i++;
	}
	return (i);
}

int	ft_end(char const *s1, char const *set, size_t len)
{
	while (len)
	{
		if (ft_strchr(set, s1[len - 1]) == 0)
			return (len);
		len--;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	size_t	start;
	size_t	end;
	size_t	len;

	if (s1 == 0)
		return (0);
	if (set == 0)
		return (ft_strdup(s1));
	len = 0;
	len = ft_strlen(s1);
	start = ft_start(s1, set, len);
	end = ft_end(s1, set, len);
	if (start >= end)
		return (ft_strdup(""));
	new = malloc(sizeof(char) * (end - start) + 1);
	if (!new)
		return (0);
	ft_strlcpy(new, s1 + start, end - start + 1);
	return (new);
}
