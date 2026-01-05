/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matisgutierreztw3nny <matisgutierreztw3    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 16:16:34 by matisgutier       #+#    #+#             */
/*   Updated: 2025/12/31 17:21:36 by matisgutier      ###   ########.fr       */
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

void	ft_error(void);
int		check_valide(char *token);
int		check_overflow(char *token);
int		check_double(char *token, t_data *data);
void	ft_check(t_data *data);
void	free_split(char **tab);

// OPERATIONS 

void	op_sa(t_data data);
void	op_sb(t_data *data);
void	op_pa(t_data *data);
void	op_pb(t_data *data);
void	op_ra(t_data *data);
void	op_rb(t_data *data);

#endif