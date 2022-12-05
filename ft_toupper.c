/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 21:52:25 by marvin            #+#    #+#             */
/*   Updated: 2022/05/04 21:52:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
// #include<ctype.h>
// #include<stdio.h>
// int main()
// {
//     printf("%d\n", ft_toupper('t'));
//     printf("%d\n\n", toupper('t'));

//     printf("%d\n", ft_toupper('Y'));
//     printf("%d\n\n", toupper('Y'));

//     printf("%d\n", ft_toupper(';'));
//     printf("%d\n\n", toupper(';'));

//     printf("%d\n", ft_toupper(' '));
//     printf("%d\n\n", toupper(' '));
// }