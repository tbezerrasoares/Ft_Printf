/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezerra <tbezerra@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:23:15 by tbezerra          #+#    #+#             */
/*   Updated: 2023/10/26 11:07:14 by tbezerra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/* static void	ft_strrev(char *str)
{
	size_t	len;
	size_t	i;
	char	tmp;

	len = ft_strlen(str);
	i = 0;
	while (i < len / 2)
	{
		tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = tmp;
		i++;
	}
} */