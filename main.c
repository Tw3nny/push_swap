/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matisgutierreztw3nny <matisgutierreztw3    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 16:15:56 by matisgutier       #+#    #+#             */
/*   Updated: 2025/12/23 17:14:31 by matisgutier      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"
# define MAX_SIZE argc - 1

void	ft_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	int		stack_a[MAX_SIZE];
	int		size_a;
	char	*token;

	i = 1;
	size_a = 0;
	while (i < argc - 1)
	{
		token = ft_split(argv[i], ' ');
		if (token == NULL || token[0] == NULL)
			ft_error();
		j = 0;
		while (token[j])
		{
			if (check_valide(token) == 1) 
				ft_error();
			if (check_overflow(token) == 1)
				ft_error();
			if (check_double(token) == 1)
				ft_error();
		}
		free(token);
		i++;
	}
}
