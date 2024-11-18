/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshein <lshein@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:35:30 by lshein            #+#    #+#             */
/*   Updated: 2024/06/01 19:47:40 by lshein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;
	size_t	l;

	if (!s)
		return (NULL);
	i = 0;
	l = ft_strlen(s);
	if (len >= l - start)
		len = l - start;
	if (start > l)
		len = 0;
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (!sub)
	{
		return (NULL);
	}
	while (i < len && s[i] && start <= l)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = 0;
	return (sub);
}

// int main()
// {
// 	char *s = "akdgjfkgm";
// 	printf("%s", ft_substr(s, 2, 4));
// }
