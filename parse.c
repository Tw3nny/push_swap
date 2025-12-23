/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matisgutierreztw3nny <matisgutierreztw3    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 13:21:12 by matisgutier       #+#    #+#             */
/*   Updated: 2025/12/23 17:13:14 by matisgutier      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_valide(char *token)
{
	int	i;
	if ((token[0] == '-' || token[0] == '+') && token[1]== '\0')
			return (1);
	i = 0;
	while (token[i])
	{
		if (!((i == 0 && (token[i] == '-' || token[i] == '+'))
		|| ft_isdigit(token[i])))
			return (1);
		i++;
	}
	return (0);
}

int	check_overflow(char *token)
{
	int	num;

	num = (long)ft_atoi(token);
	if (num > INT_MAX || num < INT_MIN)
		return (1);
	return (0);
}

int	check_double(char *token)
{
	int	i;
	int	nb;
	int	*stack_a;
	int	size_a;

	i = 0;
	nb = ft_atoi(token);

	while (i < size_a)
	{ 
		if (nb == stack_a[i])
			return (1);
		i++;
	}
	return (0);
}