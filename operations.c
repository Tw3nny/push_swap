/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matisgutierreztw3nny <matisgutierreztw3    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 14:39:50 by matisgutier       #+#    #+#             */
/*   Updated: 2026/01/09 11:26:40 by matisgutier      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// swap 1_a with 2_a
void	op_sa(t_data *data)
{
	int	tmp;
	if (data->size_a < 2)
		return ;
	tmp = data->stack_a[0];
	data->stack_a[0] = data->stack_a[1];
	data->stack_a[1] = tmp;
	write(1, "sa\n", 3);
}

// swap 1_b with 2_b
void	op_sb(t_data *data)
{
	int	tmp;
	if (data->size_b < 2)
		return ;
	tmp = data->stack_b[0];
	data->stack_b[0] = data->stack_b[1];
	data->stack_b[1] = tmp;
	write(1, "sb\n", 3);
}

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

// place the top to the bottom, moove everything on TOP
void	op_ra(t_data *data)
{
	int	i;
	int	tmp;
	if (data->size_a < 2)
		return ;
	i = 0;
	tmp = data->stack_a[0];
	while (i < data->size_a - 1)
	{
		data->stack_a[i] = data->stack_a[i + 1];
		i++;
	}
	data->stack_a[data->size_a] = tmp;
	write(1, "ra\n", 3);
}

// place the top to the bottom, moove everything on TOP
void	op_rb(t_data *data)
{
	int	i;
	int	tmp;
	if (data->size_b < 2)
		return ;
	i = 0;
	tmp = data->stack_b[0];
	while (i < data->size_b - 1)
	{
		data->stack_b[i] = data->stack_b[i + 1];
		i++;
	}
	data->stack_b[data->size_b] = tmp;
	write(1, "rb\n", 3);
}

