/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshein <lshein@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:55:37 by lshein            #+#    #+#             */
/*   Updated: 2024/05/29 18:51:12 by lshein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>
// #include <string.h>

size_t	ft_strlen(char const *s);

size_t	ft_strlen(char const *s)
{
	size_t	count;

	count = 0;
	while (*s++)
	{
		count++;
	}
	return (count);
}

// int	main()
// {
// 	char *test = "arfgtgfrt";
// 	size_t a = ft_strlen(test);
// 	size_t r = strlen(test);
// 	printf("output : %zu\n", a);
// 	printf("real output : %zu", r);
// }
