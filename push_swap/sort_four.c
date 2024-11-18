/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshein <lshein@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:01:29 by lshein            #+#    #+#             */
/*   Updated: 2024/10/28 13:01:33 by lshein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_four_algorithm(t_list **stack_a, t_list **stack_b, int *values,
		int smallest)
{
	if (smallest == values[0])
		sorting(stack_a, stack_b, sort_three);
	else if (smallest == values[1])
	{
		sa(stack_a);
		sorting(stack_a, stack_b, sort_three);
	}
	else if (smallest == values[2])
	{
		ra(stack_a);
		ra(stack_a);
		sorting(stack_a, stack_b, sort_three);
	}
	else
	{
		rra(stack_a);
		sorting(stack_a, stack_b, sort_three);
	}
}

void	sort_four(t_list **stack, t_list **stack_b)
{
	int		values[4];
	int		smallest;
	int		i;
	t_list	*temp;

	i = 0;
	temp = *stack;
	while (temp)
	{
		values[i] = ft_atoi((temp)->content);
		(temp) = (temp)->next;
		i++;
	}
	smallest = find_smallest(values, 4);
	sort_four_algorithm(stack, stack_b, values, smallest);
}
