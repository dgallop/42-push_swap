/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgallo-p <dgallo-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:42:56 by dgallo-p          #+#    #+#             */
/*   Updated: 2021/11/09 15:35:18 by dgallo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*fin;

	fin = (char *)s + ft_strlen(s);
	while (fin > s && *fin != (unsigned char)c)
		fin--;
	if (*fin == (unsigned char)c)
		return (fin);
	return (0);
}
