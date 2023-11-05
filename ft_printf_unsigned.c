/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezerra <tbezerra@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 11:58:49 by tbezerra          #+#    #+#             */
/*   Updated: 2023/11/05 16:29:56 by tbezerra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

int	ft_num_len (unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 10;
	}
	return (len);
}

char	*ft_uitoa (unsigned int n)
{
	char	*num;
	int		len;

	len = ft_num_len(n);
	num = (char *) malloc (sizeof(char) * (len + 1));
	if (!num)
		return (0);
	num[len] = '\0';
	while (n != 0)
	{
		num[len - 1] = n % 10 + 48;
		n = n / 10;
		len--;
	}
	return (num);
}

int	ft_print_unsigned (unsigned int n)
{
	int		len_prt;
	char	*num;

	len_prt = 0;
	if (n == 0)
		len_prt = write (1, "0", 1);
	else
	{
		num = ft_uitoa(n);
		len_prt = ft_printstr(num);
		free(num);
	}
	return (len_prt);
}
