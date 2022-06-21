/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgallo-p <dgallo-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 12:57:48 by dgallo-p          #+#    #+#             */
/*   Updated: 2022/06/21 09:56:21 by dgallo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
/*
		C LIBRARIES
*/
# include "../sources/libft/libft.h"
/*to write, read*/
# include <unistd.h>
/*malloc, free, exit*/
# include <stdlib.h>

/*
		ERR_MSG_MOVEMENTS
*/

# define MAX_INT	2147483647
# define MIN_INT	-2147483648
# define FD			1
// rra
/*
		MY STACK
*/
typedef struct t_my_list
{
	int					content;
	struct t_my_list	*prev;
	struct t_my_list	*next;
}	t_my_list;

/*
		FUNCTIONS
*/
void			check_argvs(int argc, char **argv, t_my_list **stacka);
/*
	my_list
*/
t_my_list		*lstlast(t_my_list *lst);
t_my_list		*lstfirst(t_my_list *lst);
int				my_lstsize(t_my_list *lst);
int				addlist(t_my_list **stack, int content);
/*
	Treat functions
*/
void			treat_argvs(t_my_list **stacka, char **argv, int argc);
/*
	Method function
*/
void			method(t_my_list **stacka, t_my_list **stackb);
//S O R T  V E R I F Y
int				its_sorted(t_my_list **stack);
//
void			sort_three(t_my_list **stacka);
void			sort_four(t_my_list **stacka, t_my_list **stackb);
void			sort_five(t_my_list **stacka, t_my_list **stackb);
void			sort_leq_dec(t_my_list **stacka, t_my_list **stackb);
//
/*
	Radix
*/
void			radix(t_my_list **stacka, t_my_list **stackb);
t_my_list		**to_positive(t_my_list **stack, int i);
int				found_lil(t_my_list *stack);
int				found_big(t_my_list *stack);
//
//void final_sort(t_my_list **stacka, t_my_list **stackb);
/*
	Movements functions
*/
// S W A P
void			sa(t_my_list **stack);
void			sb(t_my_list **stack);
void			ss(t_my_list **stacka, t_my_list **stackb);
// P U S H
void			pa(t_my_list **stacka, t_my_list **stackb);
void			pb(t_my_list **stacka, t_my_list **stackb);
// R E V E R S E
// LAST -> FIRST
void			ra(t_my_list **stack);
// LAST -> FIRST
void			rb(t_my_list **stack);
// LASTS -> FIRSTS
void			rr(t_my_list **stacka, t_my_list **stackb);
// R O T A T E
// FIRST -> LAST
void			rra(t_my_list **stack);
// FIRST -> LAST
void			rrb(t_my_list **stack);
// FIRSTS -> LASTS
void			rrr(t_my_list **stacka, t_my_list **stackb);
/*
	Error
*/
void			werror(void);

#endif
