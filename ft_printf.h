/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezerra <tbezerra@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:43:19 by tbezerra          #+#    #+#             */
/*   Updated: 2023/11/07 11:31:05 by tbezerra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>

# define DECIMAL   "0123456789"
# define HEX_LOWER "0123456789abcdef"
# define HEX_UPPER "0123456789ABCDEF"

int			ft_printf(const char *str, ...);
int			ft_putchar_var(va_list arg, const char var);
int			ft_putnbr_base(long nbr, char *base);
int			ft_putnbr_base_u(unsigned long nbr, char *base);
int			ft_putchar_len(int c);
int			ft_printmem(unsigned long long num);
void		ft_putstr(char *str);
int			ft_printstr(char *str);
int			ft_printnbr(int n);
int			ft_printpercent(void);
char		*ft_itoa(int n);
int			ft_strlen(char *s);

#endif