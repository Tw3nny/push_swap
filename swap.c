/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matisgutierreztw3nny <matisgutierreztw3    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 15:59:11 by matisgutier       #+#    #+#             */
/*   Updated: 2026/01/12 16:30:39 by matisgutier      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// swap the 2 1rst number on top of the stack in parameter
void    swap_stack(int *stack, int size)
{
    int tmp;

    if (size < 2)
        return ;
    tmp = stack[0];
    stack[0] = stack[1];
    stack[1] = tmp;
}
// swap a
void    op_sa(t_data *data)
{
    swap_stack(data->stack_a, data->size_a);
    write(1, "sa\n", 3);
}
// swap b
void    op_sb(t_data *data)
{
    swap_stack(data->stack_b, data->size_b);
    write(1, "sb\n", 3);
}
// swap both 
void    op_ss(t_data *data)
{
    swap_stack(data->stack_a, data->size_a);
    swap_stack(data->stack_b, data->size_b);
    write(1, "ss\n", 3);
}