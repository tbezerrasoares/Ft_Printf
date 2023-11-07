/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_mem.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezerra <tbezerra@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 11:29:39 by tbezerra          #+#    #+#             */
/*   Updated: 2023/11/07 11:44:20 by tbezerra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base_u(unsigned long nbr, char *base)
{
	int				size;
	unsigned int	b_size;

	size = 0;
	b_size = ft_strlen(base);
	if (nbr >= b_size)
	{
		size += ft_putnbr_base_u(nbr / b_size, base);
		nbr = nbr % b_size;
	}
	size += write(1, &base[nbr], 1);
	return (size);
}

int	ft_printmem(unsigned long long num)
{
	int	len_ptr;

	if (num)
	{
		len_ptr = write(1, "0x", 2);
		len_ptr += ft_putnbr_base_u(num, HEX_LOWER);
	}
	else
		len_ptr = write(1, "(nil)", 5);
	return (len_ptr);
}
