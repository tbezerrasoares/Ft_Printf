/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezerra <tbezerra@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:11:31 by tbezerra          #+#    #+#             */
/*   Updated: 2023/11/07 11:43:41 by tbezerra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_putchar_len(int c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putchar_var(va_list arg, const char var)
{
	int	print_len;

	print_len = 0;
	if (var == 'c')
		print_len += ft_putchar_len(va_arg(arg, int));
	else if (var == 's')
		print_len += ft_printstr (va_arg(arg, char *));
	else if (var == 'p')
		print_len += ft_printmem (va_arg(arg, unsigned long long));
	else if (var == 'd' || var == 'i')
		print_len += ft_printnbr (va_arg(arg, int));
	else if (var == 'u')
		print_len += ft_putnbr_base (va_arg(arg, unsigned int), DECIMAL);
	else if (var == 'x')
		print_len += ft_putnbr_base (va_arg(arg, unsigned int), HEX_LOWER);
	else if (var == 'X')
		print_len += ft_putnbr_base (va_arg(arg, unsigned int), HEX_UPPER);
	else if (var == '%')
		print_len += ft_printpercent();
	return (print_len);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		len;
	int		i;

	va_start(arg, str);
	len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '%')
			len += ft_putchar_len(str[i++]);
		else
		{
			i++;
			len += ft_putchar_var(arg, str[i]);
			i++;
		}
	}
	va_end(arg);
	return (len);
}

/* int main()
{
	int x = 42;
    int *ptr = &x;
	
	printf("\n %i \n",ft_printf(" %% %i %d %u", -10, 800, 9000));
	ft_printf("Teste de array do ft_printf\n");
	ft_printf("Este é um caracterer: %c\n", 'F');
	ft_printf("Este é um número: %d\n", 42);
	ft_printf("Este é um número inteiro: %i\n", 42);
    ft_printf("Esta é uma string: %s\n", "Hello, world!");
	ft_printf("Esta é um endereco memoria: %p (ft_printf)\n", ptr);
	printf("Esta é um endereco memoria: %p (printf)\n", (void *)ptr);
	ft_printf("Este é um número unsigned (-42): %u\n", -42);
	ft_printf("Este é um número hexadecimal (lower) (42): %x\n", 42);
	ft_printf("Este é um número hexadecimal (Upper) (42): %X\n", 42);
	ft_printf(" %p %p \n", 0, 0);
	ft_printf("Teste %%");
    return 0;
} */