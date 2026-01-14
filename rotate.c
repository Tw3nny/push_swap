/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matisgutierreztw3nny <matisgutierreztw3    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 16:01:01 by matisgutier       #+#    #+#             */
/*   Updated: 2026/01/14 15:04:18 by matisgutier      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_stack(int *stack, int size)
{
	int	i;
	int	tmp;

	if (size < 2)
		return ;
	tmp = stack[0];
	i = 0;
	while (i < size - 1)
	{
		stack[i] = stack[i + 1];
		i++;
	}
	stack[size - 1] = tmp;
}

void	op_ra(t_data *data)
{
	rotate_stack(data->stack_a, data->size_a);
	write(1, "ra\n", 3);
}

void	op_rb(t_data *data)
{
	rotate_stack(data->stack_b, data->size_b);
	write(1, "rb\n", 3);
}

void	op_rr(t_data *data)
{
	rotate_stack(data->stack_a, data->size_a);
	rotate_stack(data->stack_b, data->size_b);
	write(1, "rr\n", 3);
}
