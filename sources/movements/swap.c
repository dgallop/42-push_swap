/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgallo-p <dgallo-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:21:22 by dgallo-p          #+#    #+#             */
/*   Updated: 2022/03/29 20:03:09 by dgallo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

//swaps the first two numbers of the stack
static void	swap(t_my_list **stack)
{
	int	first;
	int	second;

	first = (*stack)->content;
	(*stack) = (*stack)->next;
	second = (*stack)->content;
	(*stack) = (*stack)->prev;
	(*stack)->content = second;
	(*stack) = (*stack)->next;
	(*stack)->content = first;
	(*stack) = (*stack)->prev;
}

//swaps the a stack
void	sa(t_my_list **stack)
{
	swap(stack);
	ft_putstr_fd("sa", FD);
	write(FD, "\n", 1);
}

//swaps the b stack
void	sb(t_my_list **stack)
{
	swap(stack);
	ft_putstr_fd("sb", FD);
	write(FD, "\n", 1);
}

//swaps both stacks at the same time
void	ss(t_my_list **stacka, t_my_list **stackb)
{
	swap(stacka);
	swap(stackb);
	ft_putstr_fd("ss", FD);
	write(FD, "\n", 1);
}
