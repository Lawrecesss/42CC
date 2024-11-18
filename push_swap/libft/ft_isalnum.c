/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshein <lshein@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:40:19 by lshein            #+#    #+#             */
/*   Updated: 2024/06/04 18:58:53 by lshein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int i);

int	ft_isalnum(int i)
{
	if (ft_isalpha(i) || ft_isdigit(i))
		return (1);
	return (0);
}

// int main()
// {
// 	int test = 'A';
// 	int a = ft_isalnum(test);
// 	int r = isalnum(test);
// 	printf("output : %d\n", a);
// 	printf("real output : %d", r);
// }
