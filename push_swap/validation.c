/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshein <lshein@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:42:19 by lshein            #+#    #+#             */
/*   Updated: 2024/10/28 15:46:14 by lshein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atol(const char *nptr)
{
	int		i;
	long	r;
	char	sign;

	i = 0;
	r = 0;
	sign = '+';
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if ((nptr[i] == '-' || nptr[i] == '+'))
	{
		if (nptr[i] == '-')
			sign = '-';
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		r = r * 10 + nptr[i] - '0';
		i++;
	}
	if (sign == '-')
		r = r * -1;
	return (r);
}

int	is_duplicate(char **values, char *value, int j)
{
	int	i;

	i = 0;
	if (!values[1])
		return (1);
	j++;
	while (values[j])
	{
		if (ft_atoi(value) - ft_atoi(values[j]) == 0)
			return (0);
		j++;
	}
	return (1);
}

int	isnum(char *value)
{
	int	i;

	i = 0;
	if (value[0] == '-' || value[0] == '+')
		i++;
	while (value[i])
	{
		if (!ft_isdigit(value[i]))
			return (0);
		i++;
	}
	return (1);
}

char	**valid_input(int argc, char **argv, int *error)
{
	int		i;
	char	**values;

	i = 0;
	values = get_inputs(argc, argv, error);
	if (is_not_empty(values) == 0)
		*error = 0;
	while (values[i] != NULL && error)
	{
		if (isnum(values[i]) == 0)
			*error = 0;
		if (is_duplicate(values, values[i], i) == 0)
			*error = 0;
		if (ft_atol(values[i]) < -2147483648 || ft_atol(values[i]) > 2147483647)
			*error = 0;
		i++;
	}
	if (*error == 0)
		ft_putstr_fd("Error\n", 2);
	return (values);
}

void	validation(int argc, char **argv, t_list **stack_a, t_list **stack_b)
{
	char	**values;
	int		not_error;

	not_error = 1;
	values = NULL;
	values = valid_input(argc, argv, &not_error);
	if (not_error == 1)
		make_stack(stack_a, values);
	operations(stack_a, stack_b);
	free_values(values);
}
