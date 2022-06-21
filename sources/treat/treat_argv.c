/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treat_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgallo-p <dgallo-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 13:15:00 by dgallo-p          #+#    #+#             */
/*   Updated: 2022/06/21 09:53:25 by dgallo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	verify_rep(t_my_list **stack)
{
	t_my_list	*aux;
	t_my_list	*list_aux;

	aux = (*stack);
	list_aux = (*stack)->next;
	while (aux)
	{
		list_aux = aux->next;
		while (list_aux)
		{
			if (aux->content == list_aux->content)
				return (1);
			list_aux = list_aux->next;
		}
		aux = aux->next;
	}
	return (0);
}

static int	ft_isnumber(char *number)
{
	int	i;

	i = -1;
	if (number[0] == '-')
		i++;
	while (number[++i] != 0)
	{
		if (!ft_isdigit(number[i]))
			return (1);
	}
	return (0);
}

static char	**makeline(char *argv)
{
	char	**aux;

	aux = ft_split(argv, ' ');
	return (aux);
}

void	check_argvs(int argc, char **argv, t_my_list **stacka)
{
	if (argc >= 2)
	{
		if (argc == 2)
			treat_argvs(stacka, makeline(argv[1]), argc);
		if (argc > 2)
			treat_argvs(stacka, argv, argc);
	}
	else
		werror();
}

void	treat_argvs(t_my_list **stacka, char **argv, int argc)
{
	long long int	i;

	if (argc == 2)
		i = 0;
	else
		i = 1;
	while (argv[i] != NULL)
	{
		if (ft_isnumber(argv[i]))
			werror();
		if (addlist(stacka, ft_atoi(argv[i])))
			werror();
		i++;
	}
	if (verify_rep(stacka))
		werror();
	return ;
}
