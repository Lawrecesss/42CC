/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshein <lshein@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 14:48:28 by lshein            #+#    #+#             */
/*   Updated: 2024/06/04 18:09:21 by lshein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n);

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = '\0';
		i++;
	}
}

// int main()
// {
// 	char test[100] = "safafadfdfggh";
// 	char test1[100] = "safafadfdfggh";
// 	ft_bzero(test, 4);
// 	bzero(test1, 4);
// 	printf("output: %s\n", test);
// 	printf("real output: %s", test1);
// }
