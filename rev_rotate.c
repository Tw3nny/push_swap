/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matisgutierreztw3nny <matisgutierreztw3    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 16:03:29 by matisgutier       #+#    #+#             */
/*   Updated: 2026/01/14 15:06:24 by matisgutier      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_stack(int *stack, int size)
{
	int	i;
	int	tmp;

	if (size < 2)
		return ;
	tmp = stack[size - 1];
	i = size - 1;
	while (i > 0)
	{
		stack[i] = stack[i - 1];
		i--;
	}
	stack[0] = tmp;
}

void	op_rra(t_data *data)
{
	reverse_rotate_stack(data->stack_a, data->size_a);
	write(1, "rra\n", 4);
}

void	op_rrb(t_data *data)
{
	reverse_rotate_stack(data->stack_b, data->size_b);
	write(1, "rrb\n", 4);
}

void	op_rrr(t_data *data)
{
	reverse_rotate_stack(data->stack_a, data->size_a);
	reverse_rotate_stack(data->stack_b, data->size_b);
	write(1, "rrr\n", 4);
}
