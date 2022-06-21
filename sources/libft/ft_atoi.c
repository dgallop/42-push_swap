/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgallo-p <dgallo-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:48:51 by dgallo-p          #+#    #+#             */
/*   Updated: 2022/03/29 19:16:20 by dgallo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		n;
	size_t	numero;

	i = 0;
	numero = 0;
	n = 1;
	while (str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			n = -1;
	while (str[i] >= 48 && str[i] <= 57)
		numero = numero * 10 + (str[i++] - '0');
	if (numero > 2147483647)
	{
		write(STDIN_FILENO, "Error", 5);
		write(STDIN_FILENO, "\n", 2);
		exit (1);
	}
	return (n * numero);
}
