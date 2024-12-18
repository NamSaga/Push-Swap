/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:27:21 by rmamisoa          #+#    #+#             */
/*   Updated: 2024/12/16 14:48:27 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>
#include <stdbool.h>

bool	stack_sorted(t_stack_node *stack)
{
	if (!stack)
		return (1);
	while (stack->next) 
	{
		if (stack->data > stack->next->data) 
			return (false);
		stack = stack->next;
	}
	return (true);
}

t_stack_node	*find_min(t_stack_node *stack)
{
	long	min;
	t_stack_node	*min_node;

	if (!stack) 
		return (NULL);
	min = LONG_MAX;
	while(stack)
	{
		if (stack->data < min)
		{
			min = stack->data;
			min_node = stack;
		}
		stack = stack->next;
	}
	return (min_node);
}

void	sort_three(t_stack_node **a)
{
	t_stack_node	*bn;
	
	bn = find_max(*a);
	if (bn == *a)
	 ra(a, false);
	else if ((*a)->next->data)
			rra(a, false);
	if ((*a)->data > (*a)->next->data)
		sa(a, false);
}


