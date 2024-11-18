/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshein <lshein@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:55:22 by lshein            #+#    #+#             */
/*   Updated: 2024/10/28 12:58:49 by lshein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **stack_a)
{
	t_list	*last;
	t_list	*temp;

	last = ft_lstlast(*stack_a);
	temp = (*stack_a)->next;
	last->next = *stack_a;
	last->next->next = NULL;
	*stack_a = temp;
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_list **stack_b)
{
	t_list	*last;
	t_list	*temp;

	last = ft_lstlast(*stack_b);
	temp = (*stack_b)->next;
	last->next = *stack_b;
	last->next->next = NULL;
	*stack_b = temp;
	ft_putstr_fd("rb\n", 1);
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	ra(stack_a);
	rb(stack_b);
	ft_putstr_fd("rr\n", 1);
}

void	rra(t_list **stack_a)
{
	t_list	*last;
	t_list	*first;

	last = ft_lstlast(*stack_a);
	first = *stack_a;
	while ((*stack_a)->next->next)
	{
		*stack_a = (*stack_a)->next;
	}
	(*stack_a)->next = NULL;
	*stack_a = last;
	(*stack_a)->next = first;
	ft_putstr_fd("rra\n", 1);
}

void	rrb(t_list **stack_b)
{
	t_list	*last;
	t_list	*first;

	last = ft_lstlast(*stack_b);
	first = *stack_b;
	while ((*stack_b)->next->next)
	{
		*stack_b = (*stack_b)->next;
	}
	(*stack_b)->next = NULL;
	*stack_b = last;
	(*stack_b)->next = first;
	ft_putstr_fd("rrb\n", 1);
}
