/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshein <lshein@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:43:46 by lshein            #+#    #+#             */
/*   Updated: 2024/10/28 15:47:03 by lshein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_list **stack_a)
{
	int		values[2];
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
	smallest = find_smallest(values, 2);
	if (smallest == values[1])
		sa(stack_a);
}

int	find_smallest(int *values, int len)
{
	int	smallest;
	int	i;

	i = 0;
	smallest = values[0];
	while (i < len)
	{
		if (values[i] < smallest)
			smallest = values[i];
		i++;
	}
	return (smallest);
}

void	sorting(t_list **stack_a, t_list **stack_b, void (f)(t_list **,
			t_list **))
{
	pb(stack_a, stack_b);
	f(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	sort_three(t_list **stack, t_list **stack_b)
{
	int	values[3];

	values[0] = ft_atoi((*stack)->content);
	values[1] = ft_atoi((*stack)->next->content);
	values[2] = ft_atoi((*stack)->next->next->content);
	(void)stack_b;
	if (values[0] > values[2])
	{
		ra(stack);
		if (values[1] < values[0] && values[1] > values[2])
			sa(stack);
		else if (values[1] > values[0])
			ra(stack);
	}
	else
	{
		if (values[0] > values[1])
			sa(stack);
		else if (values[1] > values[2])
		{
			rra(stack);
			sa(stack);
		}
	}
}
