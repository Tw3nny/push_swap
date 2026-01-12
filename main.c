/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matisgutierreztw3nny <matisgutierreztw3    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 16:15:56 by matisgutier       #+#    #+#             */
/*   Updated: 2026/01/09 16:09:04 by matisgutier      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

void	ft_parse_args(t_data *data, int argc, char **argv)
{
	data->i = 1;
    while (data->i < argc)
    {
    	data->token = ft_split(argv[data->i], ' ');
        if (data->token == NULL || data->token[0] == NULL)
        {
            ft_cleanup(data);
            ft_error();
        }
        ft_check(data);
        free_split(data->token);
        data->i++;
    }
}

int	main(int argc, char **argv)
{
	t_data	data;

	if (argc < 2)
        return (0);
    data = (t_data){0};
	data.stack_a = malloc(sizeof(int) * 500);
	data.stack_b = malloc(sizeof(int) * 500);
	if (!data.stack_a || !data.stack_b)
	{
		ft_cleanup(&data);
		ft_error();
	}
	ft_parse_args(&data, argc, argv);
	ft_cleanup(&data);
	return (0);
}
