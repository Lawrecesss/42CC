/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshein <lshein@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:39:23 by lshein            #+#    #+#             */
/*   Updated: 2024/10/24 17:49:08 by lshein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

char	*byte_read_error(int byte_read, char *line, char *buff)
{
	free(buff);
	if (byte_read == 0)
	{
		if (line && line[0])
			return (line);
		else
			return (NULL);
	}
	return (NULL);
}

char	*read_line(int fd, char *remaining)
{
	int		found;
	int		byte_read;
	char	*buff;
	char	*line;

	found = 0;
	buff = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	line = remaining;
	if (!buff)
		return (NULL);
	while (found == 0)
	{
		byte_read = read(fd, buff, BUFFER_SIZE);
		if (byte_read > 0)
		{
			buff[byte_read] = '\0';
			found = check_newline(buff);
			line = ft_strjoin(line, buff);
		}
		else
			return (byte_read_error(byte_read, line, buff));
	}
	free(buff);
	return (line);
}

char	*ft_get_line(const char *read_str)
{
	size_t	i;
	size_t	j;
	size_t	z;
	char	*line;

	i = 0;
	j = 0;
	z = 1;
	while (read_str[i] && read_str[i] != '\n')
		i++;
	if (read_str[i] == '\n')
		z = 2;
	line = (char *)malloc((i + z) * sizeof(char));
	if (!line)
		return (NULL);
	while (j < i + z - 1)
	{
		line[j] = read_str[j];
		j++;
	}
	line[j] = '\0';
	return (line);
}

char	*get_remaining(const char *read_str)
{
	size_t	i;
	size_t	j;
	char	*remaining;

	i = 0;
	j = 0;
	if (!read_str)
		return (NULL);
	while (read_str[i] != '\n' && read_str[i])
		i++;
	if (read_str[i] == '\n')
		i++;
	if (i >= ft_strlen(read_str))
		return (NULL);
	remaining = (char *)malloc((ft_strlen(read_str) - i + 1) * sizeof(char));
	if (!remaining)
		return (NULL);
	while (read_str[i + j])
	{
		remaining[j] = read_str[i + j];
		j++;
	}
	remaining[j] = '\0';
	return (remaining);
}

char	*get_next_line(int fd)
{
	char		*line;
	char		*read_str;
	static char	*remaining = NULL;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	read_str = read_line(fd, remaining);
	if (!read_str)
	{
		free(remaining);
		remaining = NULL;
		return (NULL);
	}
	line = ft_get_line(read_str);
	remaining = get_remaining(read_str);
	free(read_str);
	return (line);
}

// int	main(void)
// {
// 	int			fd;
// 	const char	*path;

// 	path = "text.txt";
// 	fd = open(path, O_RDONLY);
// 	char *res1 = get_next_line(fd);
// 	char *res2 = get_next_line(fd);
// 	char *res3 = get_next_line(fd);
// 	char *res4 = get_next_line(fd);
// 	char *res5 = get_next_line(fd);
// 	printf("%s", res1);
// 	printf("\n-----------\n");
// 	printf("%s", res2);
// 	printf("\n-----------\n");
// 	printf("%s", res3);
// 	printf("\n-----------\n");
// 	printf("%s", res4);
// 	printf("\n-----------\n");
// 	printf("%s", res5);
// 	free(res1);
// 	free(res2);
// 	free(res3);
// 	free(res4);
// 	free(res5);
// }
