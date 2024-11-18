/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshein <lshein@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 13:11:49 by lshein            #+#    #+#             */
/*   Updated: 2024/06/03 13:11:55 by lshein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst);

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

// int main()
// {
// 	char *content = "as";
// 	t_list *node3 = ft_lstnew("aff");
// 	t_list *node2 = ft_lstnew(content);
// 	t_list *node1 = ft_lstnew("asd");
// 	t_list **lst = &node2;
// 	ft_lstadd_front(lst, node1);
// 	ft_lstadd_back(lst, node3);
// 	printf("%s\n", (char *)ft_lstlast(*lst)->next);
// }
