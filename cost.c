/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matisgutierreztw3nny <matisgutierreztw3    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 15:27:07 by matisgutier       #+#    #+#             */
/*   Updated: 2026/01/16 16:02:38 by matisgutier      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// find the best position in the stack A to place the B value
int	find_target_position(t_data *data, int value)
{
	int	i;
	int	target_value;
	int	target_index;

	i = 0;
	target_value = INT_MAX;
	target_index = -1;
	while (i < data->size_a)
	{
		if (data->stack_a[i] > value && data->stack_a[i] < target_value)
		{
			target_value = data->stack_a[i];
			target_index = i;
		}
		i++;
	}
	if (target_index == -1)
		target_index = find_min_index(data->stack_a, data->size_a);
	return (target_index);
}

/* calculate how many operations we need to place b_index in A */
int	calculate_cost(t_data *data, int b_index)
{
	int	target_pos;
	int	cost_a;
	int	cost_b;

	target_pos = find_target_position(data, data->stack_b[b_index]);
	cost_b = calculate_rota_cost(b_index, data->size_b);
	cost_a = calculate_rota_cost(target_pos, data->size_a);
	return (cost_a + cost_b);
}

/* find number in B with the smaller value of operations needed to go in A */
int	find_cheapest_in_b(t_data *data)
{
	int	i;
	int	min_cost;
	int	cheapest_index;
	int	current_cost;

	i = 0;
	min_cost = INT_MAX;
	cheapest_index = 0;
	while (i < data->size_b)
	{
		current_cost = calculate_cost(data, i);
		if (current_cost < min_cost)
		{
			min_cost = current_cost;
			cheapest_index = i;
		}
		i++;
	}
	return (cheapest_index);
}
