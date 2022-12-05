/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmejri <tmejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 18:50:07 by tmejri            #+#    #+#             */
/*   Updated: 2022/05/18 20:37:30 by tmejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*the_list;

	the_list = 0;
	while (lst)
	{
		new_list = ft_lstnew((*f)(lst->content));
		if (!new_list)
		{
			while (the_list)
			{
				new_list = the_list->next;
				(*del)(the_list->content);
				free(the_list);
				the_list = new_list;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&the_list, new_list);
		lst = lst->next;
	}
	return (the_list);
}
