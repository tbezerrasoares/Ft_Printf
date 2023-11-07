/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezerra <tbezerra@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:07:15 by tbezerra          #+#    #+#             */
/*   Updated: 2023/11/07 11:30:24 by tbezerra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_neg(int n)
{
	if (n < 0) 
		return (-n);
	else 
		return (n);
}

static int	ft_sizecalc(int n)
{
	int	res;

	if (n <= 0)
		res = 1;
	else
		res = 0;
	while (n != 0)
	{
		n = n / 10;
		res++;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	unsigned int	num;
	char			*res;
	int				size;

	num = ft_neg(n);
	size = ft_sizecalc(n);
	res = (char *)malloc(sizeof(char) * (size + 1));
	if (!res)
		return (NULL);
	res[size--] = '\0';
	while (size >= 0)
	{
		res[size] = num % 10 + 48;
		num = num / 10;
		size--;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}
