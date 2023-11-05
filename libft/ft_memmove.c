/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezerra <tbezerra@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:35:18 by tbezerra          #+#    #+#             */
/*   Updated: 2023/10/16 12:45:00 by tbezerra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*dest;
	const char	*source;

	dest = (char *)dst;
	source = (const char *)src;
	i = 1;
	if (!dest && !source)
		return (NULL);
	if (source < dest)
	{
		while (i <= len)
		{
			dest[len - i] = source[len - i];
			i++;
		}
	}
	else
	{
		ft_memcpy(dest, source, len);
	}
	return (dest);
}
