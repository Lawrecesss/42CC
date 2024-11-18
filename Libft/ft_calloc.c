/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshein <lshein@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:56:09 by lshein            #+#    #+#             */
/*   Updated: 2024/06/01 19:43:10 by lshein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size);

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*s;
	unsigned int	t_size;

	if (nmemb == 0 && size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	t_size = nmemb * size;
	s = malloc(t_size);
	if (s == NULL)
		return (NULL);
	else
		ft_bzero(s, t_size);
	return (s);
}
