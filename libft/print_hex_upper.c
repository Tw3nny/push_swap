/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matisgutierreztw3nny <matisgutierreztw3    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:09:21 by matisgutier       #+#    #+#             */
/*   Updated: 2025/11/11 15:00:16 by matisgutier      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"
#include <stdarg.h>

void	print_hex_upper(va_list args, int *count)
{
	unsigned int	nb;

	nb = va_arg(args, unsigned int);
	putnbr_base((unsigned long) nb, "0123456789ABCDEF");
	*count += get_len_base((unsigned long) nb, "0123456789ABCDEF");
}
