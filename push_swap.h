/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matisgutierreztw3nny <matisgutierreztw3    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 16:16:34 by matisgutier       #+#    #+#             */
/*   Updated: 2026/01/12 17:11:43 by matisgutier      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# include <limits.h>

typedef struct s_data
{
	int		i;
	int		size_a;
	int		size_b;
	int		*stack_a;
	int		*stack_b;
	char	**token;
}	t_data;

/* ============================== */
/*             PARSING            */
/* ============================== */

void	ft_error(void);
void    ft_error_parsing(t_data *data);
void    ft_cleanup(t_data *data);
int		check_valide(char *token);
int		check_overflow(char *token);
int		check_double(char *token, t_data *data);
void	ft_check(t_data *data);
void	free_split(char **tab);

/* ============================== */
/*           ALGO THINGS          */
/* ============================== */

// OPERATIONS 

void    swap_stack(int *stack, int size);
void	op_sa(t_data *data);
void	op_sb(t_data *data);
void    op_ss(t_data *data);
void	op_pa(t_data *data);
void	op_pb(t_data *data);
void    rotate_stack(int *stack, int size);
void	op_ra(t_data *data);
void	op_rb(t_data *data);
void    op_rr(t_data *data);
void    reverse_rotate_stack(int *stack, int size);
void	op_rra(t_data *data);
void	op_rrb(t_data *data);

// UTILS
int	is_sorted(t_data *data);
int	find_min_index(int *stack, int size);
int	find_max_index(int *stack, int size_stack);
int	calculate_rota_cost(int	index, int size_stack);

// SMALL 

void	sort_small(t_data *data);
void	sort_three(t_data *data);
void	sort_two(t_data *data);
void	min_to_top(t_data *data, int min_index);

#endif