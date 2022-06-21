/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgallo-p <dgallo-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:26:06 by dgallo-p          #+#    #+#             */
/*   Updated: 2022/03/29 20:02:34 by dgallo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

//takes the last number of the stack at puts it on top
static void	reverse(t_my_list **stack);
//deletes the last number which is now the first one
static void	remove_bottom(t_my_list **stack);

//reverse the a stack
void	rra(t_my_list **stack)
{
	reverse(stack);
	remove_bottom(stack);
	ft_putstr_fd("rra", FD);
	write(FD, "\n", 1);
}

//reverse the b stack
void	rrb(t_my_list **stack)
{
	reverse(stack);
	remove_bottom(stack);
	ft_putstr_fd("rrb", FD);
	write(FD, "\n", 1);
}

//reverse both stack at the same time
void	rrr(t_my_list **stacka, t_my_list **stackb)
{
	reverse(stacka);
	reverse(stackb);
	remove_bottom(stacka);
	remove_bottom(stackb);
	ft_putstr_fd("rrr", FD);
	write(FD, "\n", 1);
}

static void	remove_bottom(t_my_list **stack)
{
	t_my_list	*aux;
	t_my_list	*last;

	last = lstlast((*stack));
	aux = last->prev;
	aux->next = NULL;
	free(last);
}

static void	reverse(t_my_list **stack)
{
	t_my_list	*last;
	t_my_list	*aux;
	t_my_list	*new;

	new = malloc(sizeof(t_my_list));
	if (!new)
		return ;
	last = lstlast((*stack));
	aux = (*stack);
	new->content = last->content;
	new->next = aux;
	new->prev = NULL;
	aux->prev = new;
	(*stack) = new;
}
