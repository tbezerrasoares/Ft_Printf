/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezerra <tbezerra@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:55:29 by tbezerra          #+#    #+#             */
/*   Updated: 2023/10/11 15:01:04 by tbezerra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int i, size_t len)
{
	unsigned char	*ptr;
	size_t			ln;

	ptr = (unsigned char *)str;
	ln = 0;
	while (ln < len)
		ptr[ln++] = i;
	return (ptr);
}
