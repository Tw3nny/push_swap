/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matisgutierreztw3nny <matisgutierreztw3    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 13:21:12 by matisgutier       #+#    #+#             */
/*   Updated: 2026/01/15 15:50:06 by matisgutier      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atol(const char *str)
{
	int		i;
	long	result;
	int		sign;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = -sign;
		}
		i++;
	}
	while (str[i] != '\0' && str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

int	check_valide(char *token)
{
	int	i;

	i = 0;
	if (token[i] == '-' || token[i] == '+')
	{
		if (token[i + 1] == '\0')
			return (1);
		i++;
	}
	while (token[i])
	{
		if (!ft_isdigit(token[i]))
			return (1);
		i++;
	}
	return (0);
}

int	check_overflow(char *token)
{
	long	num;

	num = ft_atol(token);
	if (num > INT_MAX || num < INT_MIN)
		return (1);
	return (0);
}

int	check_double(char *token, t_data *data)
{
	int	i;
	int	nb;

	i = 0;
	nb = ft_atoi(token);
	while (i < data->size_a)
	{
		if (nb == data->stack_a[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_check(t_data *data)
{
	int	j;

	j = 0;
	while (data->token[j])
	{
		if (check_valide(data->token[j]) == 1)
			ft_error_parsing(data);
		if (check_overflow(data->token[j]) == 1)
			ft_error_parsing(data);
		if (check_double(data->token[j], data) == 1)
			ft_error_parsing(data);
		data->stack_a[data->size_a] = ft_atoi(data->token[j]);
		data->size_a++;
		j++;
	}
}
