/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezerra <tbezerra@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:49:28 by tbezerra          #+#    #+#             */
/*   Updated: 2023/11/05 17:56:54 by tbezerra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_hex_len (unsigned int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

void	ft_put_hex (unsigned int n, const char c)
{
	if (n >= 16)
	{
		ft_put_hex (n / 16, c);
		ft_put_hex (n / 16, c);
	}
	else
	{
		if (n <= 9)
			ft_putchar_fd (n + '0', 1);
		else
		{
			if (c == 'x')
				ft_putchar_fd ((n - 10 + 'a'), 1);
			if (c == 'X')
				ft_putchar_fd ((n - 10 + 'A'), 1);
		}
	}
}

int	ft_print_hex (unsigned int i, const char c)
{
	if (i == 0)
		return (write(1, '0', 1));
	else
		ft_put_hex(i, c);
	return (ft_hex_len(i));
}
