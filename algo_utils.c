/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matisgutierreztw3nny <matisgutierreztw3    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 16:32:32 by matisgutier       #+#    #+#             */
/*   Updated: 2026/01/12 15:33:18 by matisgutier      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// check if the stack_a is sorted or not
int	is_sorted(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->size_a - 1)
	{
		if (data->stack_a[i] > data->stack_a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

// find the index of the smaller number in the stack in parameter
int	find_min_index(int *stack, int size)
{
	int	i;
	int	min_index;

	i = 1;
	min_index = 0;
	while (i < size)
	{
		if (stack[i] < stack[min_index])
			min_index = i;
		i++;
	}
	return (min_index);
}

// same than find_min with the bigger number
int	find_max_index(int *stack, int size_stack)
{
	int	i;
	int	max_index;

	i = 1;
	max_index = 0;
	while (i < size_stack)
	{
		if (stack[i] > stack[max_index])
			max_index = i;
		i++;
	}
	return (max_index);
}

// calculate the best between rotate and reverse rotate
int	calculate_rota_cost(int	index, int size_stack)
{
	if ( index <= size_stack / 2)
		return (index);
	else
		return (size_stack - index);
}