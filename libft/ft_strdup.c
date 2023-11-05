/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezerra <tbezerra@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:15:05 by tbezerra          #+#    #+#             */
/*   Updated: 2023/10/26 11:56:33 by tbezerra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*rtn;

	rtn = (char *)malloc(ft_strlen(s) + 1);
	if (!rtn)
		return (0);
	ft_memcpy(rtn, s, ft_strlen(s) + 1);
	return (rtn);
}
