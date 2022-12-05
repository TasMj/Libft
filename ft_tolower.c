/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 22:03:20 by marvin            #+#    #+#             */
/*   Updated: 2022/05/04 22:03:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
// #include<ctype.h>
// #include<stdio.h>
// int main()
// {
//     printf("%d\n", ft_tolower('t'));
//     printf("%d\n\n", tolower('t'));

//     printf("%d\n", ft_tolower('Y'));
//     printf("%d\n\n", tolower('Y'));

//     printf("%d\n", ft_tolower(';'));
//     printf("%d\n\n", tolower(';'));

//     printf("%d\n", ft_tolower(' '));
//     printf("%d\n\n", tolower(' '));
// }