/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshein <lshein@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:00:34 by lshein            #+#    #+#             */
/*   Updated: 2024/10/28 15:43:12 by lshein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting_five(t_list **stack_a, t_list **stack_b)
{
	sorting(stack_a, stack_b, sort_four);
	pa(stack_a, stack_b);
}

void	sort_five_algorithm(t_list **stack_a, t_list **stack_b, int *values,
		int smallest)
{
	if (smallest == values[0])
		sorting_five(stack_a, stack_b);
	else if (smallest == values[1])
	{
		sa(stack_a);
		sorting_five(stack_a, stack_b);
	}
	else if (smallest == values[2])
	{
		ra(stack_a);
		ra(stack_a);
		sorting_five(stack_a, stack_b);
	}
	else if (smallest == values[3])
	{
		rra(stack_a);
		rra(stack_a);
		sorting_five(stack_a, stack_b);
	}
	else
	{
		rra(stack_a);
		sorting_five(stack_a, stack_b);
	}
}

void	sort_five(t_list **stack_a, t_list **stack_b)
{
	int		values[5];
	int		smallest;
	int		i;
	t_list	*temp;

	i = 0;
	temp = *stack_a;
	while (temp)
	{
		values[i] = ft_atoi((temp)->content);
		(temp) = (temp)->next;
		i++;
	}
	smallest = find_smallest(values, 5);
	sort_five_algorithm(stack_a, stack_b, values, smallest);
}
