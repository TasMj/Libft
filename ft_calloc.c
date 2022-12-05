/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmejri <tmejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 12:19:34 by tmejri            #+#    #+#             */
/*   Updated: 2022/05/20 14:56:58 by tmejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*t;

	if (nmemb && size > (size_t) - 1 / size)
		return (0);
	t = (void *)malloc(nmemb * size);
	if (!t)
		return (NULL);
	ft_bzero(t, nmemb * size);
	return (t);
}
// #include<stdio.h>
// int main()
// {
//     int * p = ft_calloc(20,sizeof(int));
//     if(NULL != p) {
//         int I;
//         for(I = 0; I < 20; I++) {
//             p[I] = 1000-(I * 10);
//         }
//         printf("Valeur p[15] = %i\n",p[15]);
//         free(p);
//     } else {
//         printf("Impossible d'allouer de la mémoire dynamiquement !\n");
//     }
//     return 0;
// }