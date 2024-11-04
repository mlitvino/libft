/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <mlitvino@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 01:19:58 by mlitvino          #+#    #+#             */
/*   Updated: 2024/11/04 01:19:58 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*new_lst;

	new_lst = malloc(sizeof(t_list) * ft_lstsize(lst));
	if (new_lst == NULL)
		return (NULL);
	new_node = new_lst;
	while (lst != NULL)
	{
		new_node->content = f(lst->content);
		del(new_node->content);
		new_node->next = lst->next;
		new_node = lst->next;
		lst = lst->next;
	}
	return (new_lst);
}
