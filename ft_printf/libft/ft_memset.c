/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshein <lshein@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 11:58:18 by lshein            #+#    #+#             */
/*   Updated: 2024/05/30 12:53:21 by lshein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n);

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*modified_s;

	i = 0;
	modified_s = (unsigned char *)s;
	while (i < n)
	{
		modified_s[i] = c;
		i++;
	}
	return (modified_s);
}

// int main()
// {
// 	char test[100] = "";
// 	char test1[100] = "";
// 	ft_memset(test, 'c', 6);
// 	memset(test1, 'c', 6);
// 	printf("%s\n", test);
// 	printf("%s", test1);
// }
