/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezerra <tbezerra@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:14:54 by tbezerra          #+#    #+#             */
/*   Updated: 2023/10/18 11:27:22 by tbezerra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len_src;
	size_t	len;

	len_src = ft_strlen(src);
	if (!dstsize)
		return (len_src);
	if (len_src < dstsize - 1)
		len = len_src;
	else 
		len = dstsize - 1;
	ft_memcpy(dst, src, len);
	*(dst + len) = '\0';
	return (len_src);
}
