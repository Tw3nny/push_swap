/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matisgutierreztw3nny <matisgutierreztw3    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 14:39:50 by matisgutier       #+#    #+#             */
/*   Updated: 2026/01/14 15:05:23 by matisgutier      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// push TOP A to TOP B
void	op_pb(t_data *data)
{
	int	i;

	if (data->size_a == 0)
		return ;
	i = data->size_b;
	while (i > 0)
	{
		data->stack_b[i] = data->stack_b[i - 1];
		i--;
	}
	data->stack_b[0] = data->stack_a[0];
	i = 0;
	while (i < data->size_a - 1)
	{
		data->stack_a[i] = data->stack_a[i + 1];
		i++;
	}
	data->size_a--;
	data->size_b++;
	write(1, "pb\n", 3);
}

// push TOP B to TOP A
void	op_pa(t_data *data)
{
	int	i;

	if (data->size_b == 0)
		return ;
	i = data->size_a;
	while (i > 0)
	{
		data->stack_a[i] = data->stack_a[i - 1];
		i--;
	}
	data->stack_a[0] = data->stack_b[0];
	i = 0;
	while (i < data->size_b - 1)
	{
		data->stack_b[i] = data->stack_b[i + 1];
		i++;
	}
	data->size_b--;
	data->size_a++;
	write(1, "pa\n", 3);
}
