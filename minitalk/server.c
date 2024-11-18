/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshein <lshein@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 15:52:34 by lshein            #+#    #+#             */
/*   Updated: 2024/10/29 16:12:27 by lshein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	bin_to_char(int *bin)
{
	int	i;
	int	value;
	int	j;

	i = 0;
	j = 128;
	value = 0;
	while (i < 8)
	{
		value += bin[i] * (j);
		j = j / 2;
		i++;
	}
	return (value);
}

void	handle_signal(int signal)
{
	int			received_bit;
	static int	bin[8];
	static int	i = 0;
	char		c;

	received_bit = 0;
	if (signal == SIGUSR1)
	{
		received_bit = 0;
	}
	else if (signal == SIGUSR2)
	{
		received_bit = 1;
	}
	bin[i] = received_bit;
	i++;
	if (i == 8)
	{
		i = 0;
		c = bin_to_char(bin);
		write(1, &c, 1);
	}
}

int	main(void)
{
	ft_printf("%d\n", getpid());
	signal(SIGUSR1, handle_signal);
	signal(SIGUSR2, handle_signal);
	while (1)
	{
		usleep(100);
	}
	return (0);
}
