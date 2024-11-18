/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshein <lshein@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:46:50 by lshein            #+#    #+#             */
/*   Updated: 2024/06/04 18:12:56 by lshein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c)
{
	char	*result;

	result = NULL;
	if ((char)c == '\0')
		return (((char *)(s + ft_strlen(s))));
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			result = (char *)s;
		}
		s++;
	}
	return (result);
}

// int main()
// {
// 	char test[] = "asdfgfhjkl";
// 	char *output = ft_strrchr(test, 'f');
// 	char *r = strrchr(test, 'f');
// 	printf("%s\n", output);
// 	printf("%s\n", r);
// }
