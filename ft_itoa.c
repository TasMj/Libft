/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmejri <tmejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:06:44 by tmejri            #+#    #+#             */
/*   Updated: 2022/05/20 14:38:44 by tmejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_int(long n)
{
	int	c;

	c = 0;
	if (n == 0)
		c = 1;
	if (n < 0)
	{
		c = 1;
		n = -n;
	}
	while (n != 0)
	{
		n = n / 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	char	*t;
	int		len;
	int		k;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = count_int(n);
	t = (char *)malloc(sizeof(char) * len + 1);
	if (t == 0)
		return (NULL);
	if (n < 0)
	{
		n = -n;
		t[0] = '-';
		k = 1;
	}
	else
		k = 0;
	t[len--] = '\0';
	while (len >= k)
	{
		t[len--] = (n % 10) + 48;
		n = n / 10;
	}
	return (t);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
	printf("%s\n", ft_itoa(INT_MAX));
    printf("%s\n", ft_itoa(INT_MIN));
    printf("%s\n", ft_itoa(-256));
}*/