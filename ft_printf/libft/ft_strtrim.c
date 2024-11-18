/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshein <lshein@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:01:55 by lshein            #+#    #+#             */
/*   Updated: 2024/06/01 19:38:50 by lshein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set);
static int	ft_check(char const *set, char c);

static int	ft_check(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_check(set, s1[start]))
		start++;
	while (end > start && ft_check(set, s1[end - 1]))
		end--;
	result = (char *)malloc(end - start + 1);
	if (!result)
		return (NULL);
	while (start < end)
		result[i++] = s1[start++];
	result[i] = 0;
	return (result);
}
// int	main()
// {
// 	char *s1 = "  \t \t \n   \n\n\n\t";
//  	char *s2 = "";
// 	char *ret = ft_strtrim(s1, " \n\t");
// 	printf("%s", ft_strtrim(ret, s2));
// }
