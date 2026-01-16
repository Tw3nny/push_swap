/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matisgutierreztw3nny <matisgutierreztw3    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 13:42:54 by matisgutier       #+#    #+#             */
/*   Updated: 2026/01/16 16:04:12 by matisgutier      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// rotate a indew until he is on top of A
void	rotate_a_to_top(t_data *data, int target_index)
{
	if (target_index <= data->size_a / 2)
	{
		while (target_index > 0)
		{
			op_ra(data);
			target_index--;
		}
	}
	else
	{
		while (target_index < data->size_a)
		{
			op_rra(data);
			target_index++;
		}
	}
}

// same for B
void	rotate_b_to_top(t_data *data, int target_index)
{
	if (target_index <= data->size_b / 2)
	{
		while (target_index > 0)
		{
			op_rb(data);
			target_index--;
		}
	}
	else
	{
		while (target_index < data->size_b)
		{
			op_rrb(data);
			target_index++;
		}
	}
}

void	move_element_to_a(t_data *data, int b_index)
{
	int	target_pos;

	target_pos = find_target_position(data, data->stack_b[b_index]);
	rotate_b_to_top(data, b_index);
	rotate_a_to_top(data, target_pos);
	op_pa(data);
}

void	final_rotation(t_data *data)
{
	int	min_index;

	min_index = find_min_index(data->stack_a, data->size_a);
	rotate_a_to_top(data, min_index);
}

void	turk_algorithm(t_data *data)
{
	int	cheapest_index;

	push_but_3(data);
	sort_three(data);
	while (data->size_b > 0)
	{
		cheapest_index = find_cheapest_in_b(data);
		move_element_to_a(data, cheapest_index);
	}
	final_rotation(data);
}
