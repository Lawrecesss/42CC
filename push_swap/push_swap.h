/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshein <lshein@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:57:37 by lshein            #+#    #+#             */
/*   Updated: 2024/10/28 15:47:14 by lshein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);
void	sort_two(t_list **stack_a);
void	sort_three(t_list **stack, t_list **stack_b);
void	sort_four(t_list **stack, t_list **stack_b);
void	sorting(t_list **stack_a, t_list **stack_b, void (f)(t_list **,
				t_list **));
int		find_smallest(int *values, int len);
void	sort_four_algorithm(t_list **stack_a, t_list **stack_b, int *values,
			int smallest);
void	sort_five(t_list **stack_a, t_list **stack_b);
void	sorting_five(t_list **stack_a, t_list **stack_b);
void	sort_five_algorithm(t_list **stack_a, t_list **stack_b, int *values,
			int smallest);
void	set_index(t_list **stack_a, int len);
void	radix_operation(t_list **stack_a, t_list **stack_b, int len);
int		isnum(char *value);
char	**valid_input(int argc, char **argv, int *error);
void	validation(int argc, char **argv, t_list **stack_a, t_list **stack_b);
void	make_stack(t_list **stack_a, char **values);
void	operations(t_list **stack_a, t_list **stack_b);
long	ft_atol(const char *nptr);
void	free_stack(t_list **stack);
void	free_values(char **values);
int		is_sorted(t_list **stack_a);
int		count_intput(int argc, char **argv, int *is_error);
char	**get_inputs(int argc, char **argv, int *is_error);
int		is_not_empty(char **inputs);
#endif
