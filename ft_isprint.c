/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmejri <tmejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:29:50 by tmejri            #+#    #+#             */
/*   Updated: 2022/05/20 14:43:45 by tmejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
// #include<stdio.h>
// int	main()
// {
// 	printf("%d", ft_isprint(';'));
// 	printf("%d", ft_isprint('W'));
// 	printf("%d", ft_isprint(5));
// }