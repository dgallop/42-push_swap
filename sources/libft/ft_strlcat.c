/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgallo-p <dgallo-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:38:16 by dgallo-p          #+#    #+#             */
/*   Updated: 2021/11/22 13:56:54 by dgallo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	srcsize;
	size_t	destsize;

	srcsize = ft_strlen(src);
	destsize = ft_strlen(dest);
	if (size < destsize)
		return (srcsize + size);
	else
	{
		dest = dest + destsize;
		ft_strlcpy(dest, src, size - destsize);
		return (srcsize + destsize);
	}
}
