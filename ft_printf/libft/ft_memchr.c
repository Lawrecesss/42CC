/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshein <lshein@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 15:13:28 by lshein            #+#    #+#             */
/*   Updated: 2024/06/01 15:51:31 by lshein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n);

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[0] == ((unsigned char)c))
			return ((unsigned char *)s);
		s++;
		i++;
	}
	return (NULL);
}
// int main()
// {
// 	char s[] = "addtgh";
// 	char *v = ft_memchr(s, 'c', 3);
// 	printf("%s", v);
// }
