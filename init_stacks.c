/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:44:56 by rmamisoa          #+#    #+#             */
/*   Updated: 2024/12/16 15:03:58 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdbool.h>

void	index(t_stack_node *stack)
{
	int	i;
	int	median;

	i = 0;
	if (!stack)
		return ;
	median = stack_len(stack) / 2;
	while (stack)
	{
		stack->index = i;
		if (i <= median)
			stack->above_median = true;
		else 
			stack->above_median = fasle;
		stack = stack->next;
		i++;
	}
}
void	init_a(t_stack_node *a, t_stack_node *b)
{
	index(a);
	index(b);
	set_target_a(a, b);
	cost_analysis_a(a, b);
	set_cheap(a);
}

