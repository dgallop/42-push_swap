/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgallo-p <dgallo-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:25:01 by dgallo-p          #+#    #+#             */
/*   Updated: 2022/03/29 20:02:53 by dgallo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

//rotates the stack that its selected
static void	rotate(t_my_list **stack);

//rotates the a stack
void	ra(t_my_list **stack)
{
	rotate(stack);
	ft_putstr_fd("ra", FD);
	write(FD, "\n", 1);
}

//rotates the b stack
void	rb(t_my_list **stack)
{
	rotate(stack);
	ft_putstr_fd("rb", FD);
	write(FD, "\n", 1);
}

//rotates boths stacks at the same time
void	rr(t_my_list **stacka, t_my_list **stackb)
{
	rotate(stacka);
	rotate(stackb);
	ft_putstr_fd("rr", FD);
	write(FD, "\n", 1);
}

static void	rotate(t_my_list **stack)
{
	t_my_list	*first;
	t_my_list	*new;
	t_my_list	*second;
	t_my_list	*last;

	new = malloc(sizeof(t_my_list));
	if (!new)
		return ;
	first = lstfirst((*stack));
	second = first->next;
	last = lstlast((*stack));
	new->content = first->content;
	new->prev = last;
	new->next = NULL;
	last->next = new;
	second->prev = NULL;
	(*stack) = second;
	free(first);
}
