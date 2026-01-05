/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matisgutierreztw3nny <matisgutierreztw3    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 16:15:56 by matisgutier       #+#    #+#             */
/*   Updated: 2025/12/31 15:09:05 by matisgutier      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

void	ft_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

int	main(int argc, char **argv)
{
	t_data	data;

	data.i = 1;
	data.size_a = 0;
	data.size_b = 0;
	data.stack_a = malloc(sizeof(int) * (argc - 1));
	data.stack_b = malloc(sizeof(int) * (argc - 1));
	if (!data.stack_a || !data.stack_b)
		ft_error();
	while (data.i < argc)
	{
		data.token = ft_split(argv[data.i], ' ');
		if (data.token == NULL || data.token[0] == NULL)
			ft_error();
		ft_check(&data);
		free_split(data.token);
		data.i++;
	}

	free(data.stack_a);
	free(data.stack_b);
	return (0);
}
