/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_aux.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgallo-p <dgallo-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 12:26:17 by dgallo-p          #+#    #+#             */
/*   Updated: 2022/06/17 20:48:09 by dgallo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	*remove_pos(int *positions, int pos, int size)
{
	int	i;
	int	*new_positions;
	int	j;

	i = 0;
	j = 0;
	new_positions = malloc((size + 1) * sizeof(int));
	if (!new_positions)
		werror();
	while (j < size)
	{
		if (positions[i] == pos)
			i++;
		new_positions[j++] = positions[i++];
	}
	new_positions[j] = -1;
	return (new_positions);
}

static int	check(int pos, int *positions)
{
	int	i;

	i = 0;
	while (positions[i] != -1)
	{
		if (positions[i] == pos)
			return (1);
		i++;
	}
	return (0);
}

static int	found_pos(t_my_list *stack, int *positions, int pos, int real_size)
{
	t_my_list	*aux;
	int			i;
	int			j;

	i = -1;
	while (++i < real_size)
	{
		aux = lstfirst(stack);
		j = -1;
		while (++j <= real_size)
		{
			if (j == real_size)
				return (pos);
			if ((stack->content < aux->content && check(j, positions))
				|| !check(i, positions))
			{
				pos++;
				break ;
			}
			aux = aux->next;
		}
		stack = stack->next;
	}
	return (pos);
}

static void	ft_change(t_my_list **stack, int change, int pos)
{
	int	i;

	i = -1;
	(*stack) = lstfirst(*stack);
	while (++i < pos)
		(*stack) = (*stack)->next;
	(*stack)->content = change;
	(*stack) = lstfirst(*stack);
}

t_my_list	**to_positive(t_my_list **stack, int i)
{
	int	*positions;
	int	size;
	int	change;
	int	pos;

	size = my_lstsize(*stack);
	positions = malloc((size + 1) * sizeof(int));
	if (!positions)
		werror();
	while (++i < size)
		positions[i] = i;
	positions[i] = -1;
	change = size - 1;
	while (size > 0)
	{
		(*stack) = lstfirst(*stack);
		pos = found_pos(*stack, positions, 0, my_lstsize(*stack));
		(*stack) = lstfirst(*stack);
		ft_change(stack, change--, pos);
		size--;
		positions = remove_pos(positions, pos, size);
	}
	return (stack);
}
