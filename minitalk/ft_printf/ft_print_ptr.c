/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshein <lshein@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:03:30 by lshein            #+#    #+#             */
/*   Updated: 2024/06/10 22:09:55 by lshein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_print_ptr(void *i)
{
	int						len;
	long long unsigned int	ptr;

	len = 0;
	if (i <= 0)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	ptr = (long long unsigned int)i;
	ft_putstr_fd("0x", 1);
	len = ft_print_hex(ptr, 'x');
	return (len + 2);
}
