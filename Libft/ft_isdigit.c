/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshein <lshein@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:27:56 by lshein            #+#    #+#             */
/*   Updated: 2024/06/04 18:12:56 by lshein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int d);

int	ft_isdigit(int d)
{
	if (d >= 48 && d <= 57)
		return (1);
	return (0);
}

// int main()
// {
// 	int test = '0';
// 	int a = ft_isdigit(test);
// 	int r = isdigit(test);
// 	printf("output: %d\n", a);
// 	printf("real output: %d", r);
// }
