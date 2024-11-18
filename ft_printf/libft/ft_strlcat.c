/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshein <lshein@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:39:40 by lshein            #+#    #+#             */
/*   Updated: 2024/06/03 15:49:47 by lshein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dl;

	i = 0;
	j = ft_strlen(dst);
	dl = j;
	if (size < dl)
		return (size + ft_strlen((char *)src));
	while (src[i] && i + dl + 1 < size)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	if (j < size)
		dst[j] = '\0';
	return (dl + ft_strlen((char *)src));
}

// int	main()
// {
// 	char *src = "asdfdf";
// 	char dst[] = "adf";
// 	char *src1 = "fkdkflf";
// 	char dst1[] = "dfji";
// 	printf("%zu\n", ft_strlcat(dst, src, 8));
// 	printf("%zu", ft_strlcat(dst1, src1, 8));
// }
