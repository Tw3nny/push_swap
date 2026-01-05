/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matisgutierreztw3nny <matisgutierreztw3    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 18:14:00 by matisgutier       #+#    #+#             */
/*   Updated: 2025/11/11 15:34:46 by matisgutier      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"
#include <stdarg.h>

void	putnbr_base(unsigned long nb, char *base)
{
	unsigned long	base_lenght;

	base_lenght = ft_strlen(base);
	if (nb >= base_lenght)
		putnbr_base(nb / base_lenght, base);
	ft_putchar_fd(base[nb % base_lenght], 1);
}

int	get_len_base(unsigned long nb, char *base)
{
	unsigned long	base_lenght;
	int				len;

	base_lenght = ft_strlen(base);
	len = 1;
	while (nb >= base_lenght)
	{
		nb /= base_lenght;
		len++;
	}
	return (len);
}
