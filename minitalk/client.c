/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshein <lshein@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 15:10:19 by lshein            #+#    #+#             */
/*   Updated: 2024/10/29 16:12:33 by lshein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_bit(pid_t server_pid, int bit)
{
	if (bit == 0)
	{
		kill(server_pid, SIGUSR1);
	}
	else
	{
		kill(server_pid, SIGUSR2);
	}
	usleep(400);
}

int	*char_to_bin(char c)
{
	int	i;
	int	*binary;

	i = 7;
	binary = ft_calloc(8, sizeof(int));
	while (i >= 0)
	{
		binary[i] = (c & 1);
		c >>= 1;
		i--;
	}
	return (binary);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	int		*bin;
	pid_t	server_pid;
	char	*message;

	if (argc > 2)
	{
		message = ft_strjoin(argv[2], "\n");
		i = 0;
		server_pid = ft_atoi(argv[1]);
		while (message[i])
		{
			j = -1;
			bin = char_to_bin(message[i]);
			while (++j < 8)
			{
				send_bit(server_pid, bin[j]);
			}
			i++;
			free(bin);
		}
		free(message);
	}
	return (0);
}
