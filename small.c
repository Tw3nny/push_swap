/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matisgutierreztw3nny <matisgutierreztw3    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:15:41 by matisgutier       #+#    #+#             */
/*   Updated: 2026/01/16 15:37:17 by matisgutier      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// for case when there is only 2 number in A
void	sort_two(t_data *data)
{
	if (data->stack_a[0] > data->stack_a[1])
		op_sa(data);
}

// same but with 3
void	sort_three(t_data *data)
{
	int	max_index;

	max_index = find_max_index(data->stack_a, data->size_a);
	if (max_index == 0)
	{
		op_ra(data);
		if (data->stack_a[0] > data->stack_a[1])
			op_sa(data);
	}
	else if (max_index == 1)
	{
		op_rra(data);
		if (data->stack_a[0] > data->stack_a[1])
			op_sa(data);
	}
	else
	{
		if (data->stack_a[0] > data->stack_a[1])
			op_sa(data);
	}
}

// place the smaller number in top of A 
void	min_to_top(t_data *data, int min_index)
{
	if (min_index <= data->size_a / 2)
	{
		while (min_index > 0)
		{
			op_ra(data);
			min_index--;
		}
	}
	else
	{
		while (min_index < data->size_a)
		{
			op_rra(data);
			min_index++;
		}
	}
}

// algo for 4 and 5 numbers in A
void	sort_small(t_data *data)
{
	int	min_index;

	while (data->size_a > 3)
	{
		min_index = find_min_index(data->stack_a, data->size_a);
		min_to_top(data, min_index);
		op_pb(data);
	}
	sort_three(data);
	while (data->size_b > 0)
		op_pa(data);
}
