/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshein <lshein@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:04:23 by lshein            #+#    #+#             */
/*   Updated: 2024/06/11 16:54:20 by lshein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int				ft_printf(const char *str, ...);
int				ft_printchar(int c);
int				ft_printstr(char *str);
int				ft_printnbr(int n);
int				ft_printpercent(void);
int				ft_print_hex(long long unsigned int num, const char format);
int				ft_print_ptr(void *str);
unsigned int	ft_print_unsigned(unsigned int n);

#endif
