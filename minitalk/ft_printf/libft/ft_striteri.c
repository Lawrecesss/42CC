/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshein <lshein@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 15:40:26 by lshein            #+#    #+#             */
/*   Updated: 2024/05/24 16:12:34 by lshein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *));

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}

// void to_uppercase(unsigned int i, char *s) {
//   (void)i;
//     if (s[0] >= 'a' && s[0] <= 'z')
// 	{
//       s[0] -= 32;
//     }
// }

// int main() {
//     char s[] = "asdf";
//     ft_striteri(s, to_uppercase);
//     printf("%s\n", s);
//     return 0;
// }
