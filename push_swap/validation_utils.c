/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshein <lshein@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:59:36 by lshein            #+#    #+#             */
/*   Updated: 2024/10/28 15:42:48 by lshein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_list **stack_a)
{
	t_list	*temp;
	int		is_sorting;

	temp = *stack_a;
	is_sorting = 1;
	while (temp && temp->next && is_sorting == 1)
	{
		if (temp->index == temp->next->index - 1)
			temp = temp->next;
		else
			is_sorting = 0;
	}
	return (is_sorting);
}

int	count_intput(int argc, char **argv, int *is_error)
{
	int		i;
	int		j;
	int		count;
	char	**temp;

	i = 1;
	count = 0;
	while (i < argc)
	{
		j = 0;
		temp = ft_split(argv[i], ' ');
		if (!temp[0])
			*is_error = 0;
		while (temp[j])
		{
			count++;
			j++;
		}
		i++;
		free_values(temp);
		temp = NULL;
	}
	return (count);
}

char	**get_inputs(int argc, char **argv, int *is_error)
{
	int		i;
	int		j;
	int		y;
	char	**values;
	char	**temp;

	i = 1;
	y = 0;
	values = (char **)malloc(sizeof(char *) * (count_intput(argc, argv,
					is_error) + 1));
	while (i < argc)
	{
		j = -1;
		temp = ft_split(argv[i], ' ');
		while (temp[++j])
		{
			values[y] = ft_strdup(temp[j]);
			y++;
		}
		i++;
		free_values(temp);
		temp = NULL;
	}
	values[y] = NULL;
	return (values);
}

int	is_not_empty(char **inputs)
{
	int	i;

	i = 0;
	if (inputs[0] == NULL)
		return (0);
	while (inputs[i])
	{
		if (ft_strlen(inputs[i]) == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
