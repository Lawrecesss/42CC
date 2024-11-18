/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshein <lshein@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 15:03:33 by lshein            #+#    #+#             */
/*   Updated: 2024/05/29 21:53:14 by lshein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;

	i = 0;
	if (src == NULL && dest == NULL)
		return (NULL);
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}
// int main()
// {
// 	char test_src[7] = "helloo";
// 	char test1_src[7] = "helloo";
// 	char test_dest[5] = "bbbb";
// 	char test1_dest[5] = "bbbb";
// 	ft_memcpy(test_dest, test_src, 2);
// 	memcpy(test1_dest, test1_src, 2);
// 	printf("output: %s\n", test_dest);
// 	printf("real output: %s\n", test1_dest);
// }
