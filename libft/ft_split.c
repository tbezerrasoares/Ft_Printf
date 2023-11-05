/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezerra <tbezerra@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:27:48 by tbezerra          #+#    #+#             */
/*   Updated: 2023/10/25 16:02:26 by tbezerra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_char(const char *s, char c)
{
	int	i;
	int	mark;

	i = 0;
	mark = 0;
	while (*s)
	{
		if (*s != c && mark == 0)
		{
			mark = 1;
			i++;
		}
		else if (*s == c)
			mark = 0;
		s++;
	}
	return (i);
}

char	*str_dup(const char *s, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc ((finish - start +1) * sizeof(char));
	while (start < finish)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	split = malloc ((count_char(s, c) + 1) * sizeof(char *));
	if (!s || !split)
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = str_dup(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = NULL;
	return (split);
}

/* #include <stdio.h>
#include <stdlib.h>
int main() {
    const char *input = "Esta,e,uma,frase,de,exemplo";
    char delimiter = ',';

    char **result = ft_split(input, delimiter);

    if (result) {
        for (int i = 0; result[i] != NULL; i++) {
            printf("Part %d: %s\n", i, result[i]);
            free(result[i]);  // Liberar a memória alocada para cada parte
        }
        free(result);  // Liberar a memória alocada para o array de partes
    } else {
        printf("A alocação de memória falhou.\n");
    }

    return 0;
} */