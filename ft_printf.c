/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezerra <tbezerra@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:11:31 by tbezerra          #+#    #+#             */
/*   Updated: 2023/11/05 16:33:16 by tbezerra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_len (int c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putchar_var (va_list arg, const char var)
{
	int	print_len;

	print_len = 0;
	if (var == 'c')
		print_len += ft_putchar_len(va_arg(arg, int));
	else if (var == 's')
		print_len += ft_printstr (va_arg(arg, char *));
	else if (var == 'p')
		print_len += ft_printmen (va_arg(arg, unsigned long long));
	else if (var == 'd' || var == 'i')
		print_len += ft_printnbr (va_arg(arg, int));
	else if (var == 'u')
		print_len += ft_print_unsigned(va_arg(arg, unsigned int));
	else if (var == 'x' || var == 'X')
		print_len += ft_print_hex(va_arg(arg, unsigned int), var);
	else if (var == '%')
		print_len += ft_printpercent();
	return (print_len);
}

int		ft_printf (const char *str, ...)
{
	va_list	arg;
	int		len;
	int		i;

	va_start(arg, str);
	len = 0;
	i = 0;
	while (str[i] != '/0')
	{
		if (str[i] != '%')
			len += ft_putchar_len(str[i++]);
		else
		{
			i++;
			len += ft_putchar_var(arg, str[i]);
		}
	}
	va_end(arg);
	return (len);
}

int main()
{
	ft_printf("Este é um número: %d\n", 42);
    ft_printf("Esta é uma string: %s\n", "Hello, world!");
    return 0;
}