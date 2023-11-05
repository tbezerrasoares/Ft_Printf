/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezerra <tbezerra@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:43:19 by tbezerra          #+#    #+#             */
/*   Updated: 2023/11/05 18:14:36 by tbezerra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <stdint.h>

int		ft_printf(const char *str, ...);
int		ft_putchar_var (va_list arg, const char var);
int		ft_putchar_len (int c);
int		ft_hex_len (unsigned int n);
void	ft_put_hex (unsigned int n, const char c);
int		ft_print_hex (unsigned int i, const char c);
int		ft_num_len (unsigned int num);
char	*ft_uitoa (unsigned int n);
int		ft_print_unsigned (unsigned int n);
int		ft_mem_len (uintptr_t num);
void	ft_put_mem(uintptr_t num);
int		ft_printmem (unsigned long long num);
void	ft_putstr (char *str);
int		ft_printstr (char *str);
int		ft_printnbr (int n);
int		ft_printpercent (void);

#endif