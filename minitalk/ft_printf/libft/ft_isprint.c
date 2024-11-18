/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshein <lshein@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:32:54 by lshein            #+#    #+#             */
/*   Updated: 2024/06/04 18:12:56 by lshein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c);

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// int main()
// {
// 	int test = 'a';
// 	int a = ft_isprint(test);
// 	int r = isprint(test);
// 	printf("output: %d\n", a);
// 	printf("real output: %d", r);
// }
