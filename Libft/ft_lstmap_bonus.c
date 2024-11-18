/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshein <lshein@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 13:10:44 by lshein            #+#    #+#             */
/*   Updated: 2024/06/04 18:06:24 by lshein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

static void	ft_del(void *content, void (*del)(void *), t_list *new_list)
{
	del(content);
	ft_lstclear(&new_list, del);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*current_node;
	t_list	*node;
	void	*lst_content;

	new_list = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		lst_content = f(lst->content);
		node = ft_lstnew(lst_content);
		if (!node)
		{
			ft_del(lst_content, del, new_list);
			return (NULL);
		}
		if (!new_list)
			new_list = node;
		else
			current_node->next = node;
		lst = lst->next;
		current_node = node;
	}
	return (new_list);
}
