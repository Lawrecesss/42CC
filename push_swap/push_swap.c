/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshein <lshein@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 00:06:29 by lshein            #+#    #+#             */
/*   Updated: 2024/10/28 15:45:04 by lshein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	make_stack(t_list **stack_a, char **values)
{
	int	i;

	i = 0;
	while (values[i] != NULL)
	{
		ft_lstadd_back(stack_a, ft_lstnew(values[i]));
		i++;
	}
}

void	operations(t_list **stack_a, t_list **stack_b)
{
	int	len;

	len = ft_lstsize(*stack_a);
	set_index(stack_a, len);
	if (!is_sorted(stack_a))
	{
		if (len > 5)
			radix_operation(stack_a, stack_b, len);
		else if (len == 2)
			sort_two(stack_a);
		else if (len == 3)
			sort_three(stack_a, stack_b);
		else if (len == 4)
			sort_four(stack_a, stack_b);
		else if (len == 5)
			sort_five(stack_a, stack_b);
		else if (len == 1)
			return ;
	}
}

void	free_stack(t_list **stack)
{
	t_list	*temp;

	while (*stack)
	{
		temp = (*stack)->next;
		free(*stack);
		*stack = temp;
	}
}

void	free_values(char **values)
{
	int	i;

	i = 0;
	while (values[i] != NULL)
	{
		free(values[i]);
		i++;
	}
	free(values);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (-1);
	if (argc > 1)
	{
		validation(argc, argv, &stack_a, &stack_b);
	}
	free_stack(&stack_a);
	free_stack(&stack_b);
}
