/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgallo-p <dgallo-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:02:56 by dgallo-p          #+#    #+#             */
/*   Updated: 2022/03/29 19:38:55 by dgallo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	init_split(t_my_list **stacka, t_my_list **stackb, int half);

//sort a stack of three numbers
void	sort_three(t_my_list **stacka)
{
	if (found_big(*stacka) == 0)
	{
		if ((*stacka)->next->content > (*stacka)->next->next->content)
		{
			sa(stacka);
			rra(stacka);
		}
		else
			ra(stacka);
	}
	if ((*stacka)->content > (*stacka)->next->next->content
		|| (*stacka)->content > (*stacka)->next->content)
	{
		if ((*stacka)->next->content > (*stacka)->next->next->content)
			rra(stacka);
		else
			sa(stacka);
	}
	if (its_sorted(stacka) == 1)
	{
		rra(stacka);
		sa(stacka);
	}
}

//sort a stack of four numbers
void	sort_four(t_my_list **stacka, t_my_list **stackb)
{
	if (found_lil(*stacka) == 2)
		rra(stacka);
	if (found_lil(*stacka) == 3)
		rra(stacka);
	if (found_lil(*stacka) == 1)
		sa(stacka);
	if (found_lil(*stacka) == 0)
		pb(stacka, stackb);
	if (its_sorted(stacka) == 1)
		sort_three(stacka);
	pa(stacka, stackb);
}

//sort a stack of five numbers
void	sort_five(t_my_list **stacka, t_my_list **stackb)
{
	if (my_lstsize(*stacka) == 3)
	{
		sort_three(stacka);
		pa(stacka, stackb);
		pa(stacka, stackb);
		return ;
	}
	if (found_lil(*stacka) == 3)
		rra(stacka);
	if (found_lil(*stacka) == 4)
		rra(stacka);
	if (found_lil(*stacka) == 2)
	{
		ra(stacka);
		ra(stacka);
	}
	if (found_lil(*stacka) == 1)
		sa(stacka);
	if (found_lil(*stacka) == 0)
		pb(stacka, stackb);
	sort_five(stacka, stackb);
}

//initialize and ends sorting the stack of 10 or less numbers
void	sort_leq_dec(t_my_list **stacka, t_my_list **stackb)
{
	int	half;
	int	i;

	i = 0;
	if (my_lstsize(*stacka) % 2 == 0)
		half = my_lstsize(*stacka) / 2;
	else
		half = (my_lstsize(*stacka) - 1) / 2;
	init_split(stacka, stackb, half);
	sort_five(stacka, stackb);
	if ((my_lstsize(*stacka)) + (my_lstsize(*stackb)) > 10)
	{
		while (i <= 4)
		{
			pa(stacka, stackb);
			i++;
		}
	}
	else
	{
		while (my_lstsize(*stackb) > 0)
			pa(stacka, stackb);
	}
}

//splits the a stack into b stack sorted
static void	init_split(t_my_list **stacka, t_my_list **stackb, int half)
{
	int	little;

	little = found_lil(*stacka);
	if (my_lstsize(*stacka) == 5)
		return ;
	if (little == 0)
		pb(stacka, stackb);
	if (little <= half)
	{
		if (little > 1)
			ra(stacka);
		if (little == 1)
			sa(stacka);
	}
	if (little > half)
		rra(stacka);
	if (my_lstsize(*stacka) % 2 == 0)
		half = my_lstsize(*stacka) / 2;
	else
		half = (my_lstsize(*stacka) - 1) / 2;
	init_split(stacka, stackb, half);
}
