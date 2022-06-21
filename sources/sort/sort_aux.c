/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_aux.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgallo-p <dgallo-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:46:04 by dgallo-p          #+#    #+#             */
/*   Updated: 2022/06/21 09:55:48 by dgallo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

//return the position of the biggest number of the stack
static	int	return_pos_big(int pos, t_my_list *aux, t_my_list *stack)
{
	t_my_list	*list_aux;
	int			cont;

	while (aux)
	{
		list_aux = lstfirst(stack);
		cont = 0;
		while (list_aux)
		{
			if (aux->content < list_aux->content)
			{
				pos++;
				break ;
			}
			list_aux = list_aux->next;
			cont++;
			if (cont == my_lstsize(stack))
				return (pos);
		}
		aux = aux->next;
	}
	return (pos);
}

//return the position of the littlest number of the stack
static	int	return_pos_lil(int pos, t_my_list *aux, t_my_list *stack)
{
	t_my_list	*list_aux;
	int			cont;

	while (aux)
	{
		list_aux = lstfirst(stack);
		cont = 0;
		while (list_aux)
		{
			if (aux->content > list_aux->content)
			{
				pos++;
				break ;
			}
			list_aux = list_aux->next;
			cont++;
			if (cont == my_lstsize(stack))
				return (pos);
		}
		aux = aux->next;
	}
	return (pos);
}

int	found_big(t_my_list *stack)
{
	t_my_list	*aux;
	int			pos;

	aux = stack;
	pos = 0;
	return (return_pos_big(pos, aux, stack));
}

int	found_lil(t_my_list *stack)
{
	t_my_list	*aux;
	int			pos;

	aux = stack;
	pos = 0;
	return (return_pos_lil(pos, aux, stack));
}
