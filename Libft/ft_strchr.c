/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshein <lshein@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:09:16 by lshein            #+#    #+#             */
/*   Updated: 2024/06/04 18:12:56 by lshein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c);

char	*ft_strchr(const char *s, int c)
{
	if ((char)c == '\0')
		return (((char *)(s + ft_strlen(s))));
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	return (0);
}

// int main()
// {
// 	char test[] = "teste";
// 	char *output = ft_strchr(test, 357);
// 	// char *r = strchr(test, 'u');
// 	printf("%p\n", output);
// 	// printf("%s\n", r);
// }
