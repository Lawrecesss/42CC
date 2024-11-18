/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshein <lshein@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 12:47:39 by lshein            #+#    #+#             */
/*   Updated: 2024/08/12 14:38:41 by lshein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content);

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->next = NULL;
	node->content = content;
	return (node);
}
// int main()
// {
// 	// char *a ="";

// 	int i = 10000000;
// 	int j = 0;
// 	char *a = malloc(10000000);
//     while (j < i)
//     {
//         a[j] = 'a';
//         j++;
//     }
// 	t_list *node = ft_lstnew(a);
// 	printf("%lu\n", sizeof(t_list));
// 	printf("%s", (char *)node->content);
// }
