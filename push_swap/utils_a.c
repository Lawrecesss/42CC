/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshein <lshein@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:55:13 by lshein            #+#    #+#             */
/*   Updated: 2024/10/28 12:58:44 by lshein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **stack_a)
{
	t_list	*temp;
	t_list	*next;

	temp = *stack_a;
	next = (*stack_a)->next->next;
	*stack_a = (*stack_a)->next;
	(*stack_a)->next = temp;
	(*stack_a)->next->next = next;
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_list **stack_b)
{
	t_list	*temp;
	t_list	*next;

	temp = *stack_b;
	next = (*stack_b)->next->next;
	*stack_b = (*stack_b)->next;
	(*stack_b)->next = temp;
	(*stack_b)->next->next = next;
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	sa(stack_a);
	sb(stack_b);
	ft_putstr_fd("ss\n", 1);
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp;

	if (*stack_b)
	{
		temp = *stack_b;
		*stack_b = (*stack_b)->next;
		temp->next = *stack_a;
		*stack_a = temp;
	}
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp;

	if (*stack_a)
	{
		temp = *stack_a;
		*stack_a = (*stack_a)->next;
		temp->next = *stack_b;
		*stack_b = temp;
	}
	ft_putstr_fd("pb\n", 1);
}
