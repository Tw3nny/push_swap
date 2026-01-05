/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matisgutierreztw3nny <matisgutierreztw3    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:51:29 by matisgutier       #+#    #+#             */
/*   Updated: 2025/11/11 14:56:35 by matisgutier      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"
#include <stdarg.h>

void	print_unsigned(va_list args, int *count)
{
	unsigned int	nb;

	nb = va_arg(args, unsigned int);
	putnbr_base((unsigned long) nb, "0123456789");
	*count += get_len_base((unsigned long) nb, "0123456789");
}
