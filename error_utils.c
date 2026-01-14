/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matisgutierreztw3nny <matisgutierreztw3    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 14:12:35 by matisgutier       #+#    #+#             */
/*   Updated: 2026/01/14 15:00:10 by matisgutier      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_split(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

void	ft_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

void	ft_cleanup(t_data *data)
{
	if (data->stack_a)
		free(data->stack_a);
	if (data->stack_b)
		free(data->stack_b);
}

void	ft_error_parsing(t_data *data)
{
	free_split(data->token);
	ft_cleanup(data);
	ft_error();
}
