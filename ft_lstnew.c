/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmejri <tmejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 10:31:06 by tmejri            #+#    #+#             */
/*   Updated: 2022/05/17 14:59:41 by tmejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ma_liste;

	ma_liste = malloc(sizeof(t_list));
	if (!ma_liste)
		return (NULL);
	ma_liste->content = content;
	ma_liste->next = NULL;
	return (ma_liste);
}
