/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmejri <tmejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 18:06:38 by tmejri            #+#    #+#             */
/*   Updated: 2022/05/20 14:47:56 by tmejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	nb_word(const char *s, char c)
{
	size_t	n;
	size_t	i;
	size_t	compteur;

	n = 1;
	i = 0;
	compteur = 0;
	while (s[i])
	{
		if (s[i] == c)
			n = 1;
		if (s[i] != c && n == 1)
		{
			compteur++;
			n = 0;
		}
		i++;
	}
	return (compteur);
}

static char	*ft_copy(char *dest, char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**s_split;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	s_split = (char **)malloc(sizeof(char *) * (nb_word(s, c) + 1));
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			k = 0;
			while (s[i + k] != c && s[i + k] != '\0')
				k++;
			s_split[j] = (char *)malloc(sizeof(char) * (k + 1));
			ft_copy(s_split[j], s + i, c);
			i += k;
			j++;
		}
	}
	s_split[j] = NULL;
	return (s_split);
}

// #include <stdio.h>
// int main()
// {
// 	char	**s;

// 	s = ft_split("s tripouille s", ' ');
// 	for (int i = 0; i < 4; i++)
// 	{
// 		printf("%s	|", s[i]);
// 		free(s[i]);
// 	}	
// 	free(s);
// }