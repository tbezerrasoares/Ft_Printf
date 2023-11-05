/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_mem.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezerra <tbezerra@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 11:29:39 by tbezerra          #+#    #+#             */
/*   Updated: 2023/11/05 11:50:54 by tbezerra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_mem_len (uintptr_t num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_put_mem(uintptr_t num)
{
	if (num >= 16)
	{
		ft_put_mem(num / 16);
		ft_put_mem(num % 16);
	}
	else
	{
		if (num > 9)
			ft_putchar_fd ((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

int	ft_printmem (unsigned long long num)
{
	int	len_prt;

	len_prt = 0;
	len_prt += write(1, "0x", 2);
	if (num == 0)
		len_prt += write(1, "0", 1);
	else
	{
		ft_put_mem(num);
		len_prt += ft_hex_mem(num);
	}
	return (num);
}
