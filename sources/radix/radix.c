/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgallo-p <dgallo-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 11:36:42 by dgallo-p          #+#    #+#             */
/*   Updated: 2022/03/29 19:22:18 by dgallo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	get_max_bits(int size)
{
	int			max_number;
	int			max_bits;

	max_bits = 0;
	max_number = size - 1;
	while ((max_number >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	radix(t_my_list **stacka, t_my_list **stackb)
{
	t_my_list	*aux;
	int			bit;
	int			size;
	int			max_bits;
	int			cont;

	bit = -1;
	stacka = to_positive(stacka, -1);
	size = my_lstsize(*stacka);
	max_bits = get_max_bits(size);
	while (++bit < max_bits)
	{
		cont = 0;
		while (cont++ < size)
		{
			aux = lstfirst(*stacka);
			if (((aux->content >> bit) & 1) == 1)
				ra(stacka);
			else
				pb(stacka, stackb);
		}
		while (my_lstsize(*stackb) != 0)
			pa(stacka, stackb);
	}
}
