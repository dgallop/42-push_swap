/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgallo-p <dgallo-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 12:38:50 by dgallo-p          #+#    #+#             */
/*   Updated: 2021/11/18 13:58:26 by dgallo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list			*lastelem;

	if (!lst)
		lastelem = lst;
	while (lst)
	{
		lastelem = lst;
		lst = lst->next;
	}
	return (lastelem);
}
