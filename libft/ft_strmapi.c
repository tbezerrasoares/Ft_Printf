/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezerra <tbezerra@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:13:32 by tbezerra          #+#    #+#             */
/*   Updated: 2023/10/26 09:37:27 by tbezerra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_str;
	unsigned int	i;

	new_str = ft_strdup(s);
	if (!s || !f || !new_str)
		return (0);
	i = 0;
	while (new_str[i])
	{
		new_str[i] = f(i, new_str[i]);
		i++;
	}
	return (new_str);
}

/* char example_mapping(unsigned int index, char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 32; // Transforma caracteres minúsculos em maiúsculos
    }
    return c;
}

int main() {
    const char *input_string = "Hello, World!";

    char *result = ft_strmapi(input_string, example_mapping);

    if (result) {
        printf("String após a transformação: \"%s\"\n", result);
        free(result); 
    } else {
        printf("Erro: a função ft_strmapi não pôde ser executada.\n");
    }

    return 0;
} */