/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshein <lshein@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:58:10 by lshein            #+#    #+#             */
/*   Updated: 2024/10/28 12:58:13 by lshein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_index(t_list **stack_a, int len)
{
	t_list	*next;
	t_list	*current_node;
	int		index;
	int		i;
	int		j;

	i = 0;
	current_node = (*stack_a);
	while (i < len && current_node)
	{
		j = 0;
		index = 0;
		next = (*stack_a);
		while (j < len && next)
		{
			if (ft_atoi(current_node->content) > ft_atoi(next->content))
				index++;
			next = next->next;
			j++;
		}
		current_node->index = index;
		current_node = current_node->next;
		i++;
	}
}

void	radix_operation(t_list **stack_a, t_list **stack_b, int len)
{
	int	bits;
	int	i;
	int	j;

	bits = 0;
	i = 0;
	while ((len >> bits) != 0)
		bits++;
	while (i < bits)
	{
		j = 0;
		while (j < len)
		{
			if ((((*stack_a)->index >> i) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
			j++;
		}
		while (ft_lstsize(*stack_b) != 0)
			pa(stack_a, stack_b);
		i++;
	}
}
