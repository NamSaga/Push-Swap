/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_a_to_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:44:56 by rmamisoa          #+#    #+#             */
/*   Updated: 2024/12/18 14:45:25 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	current_index(t_stack_node *stack)
{
	int	i;
	int	median;

	i = 0;
	if (!stack)
		return ;
	median = stack_len(stack) / 2;
	while (stack)
	{
		stack->pos = i;
		if (i <= median)
			stack->mid = true;
		else 
			stack->mid = false;
		stack = stack->next;
		i++;
	}
}

static void	set_target_a(t_stack_node *a, t_stack_node *b)
{
	t_stack_node *current_b;
	t_stack_node *target_node;
	long	match;

	while (a) 
	{
		match = LONG_MIN;
		current_b = b;
		while (current_b) 
		{
			if (current_b->data < a->data && current_b->data > match)
			{
				match = current_b->data;
				target_node = current_b;
			}
			current_b = current_b->next;
		}
		if (match == LONG_MIN)
			a->target_node = find_max(b);
		else 
			a->target_node = target_node;
		a = a->next;
	}
}

static	void	cost_analysis_a(t_stack_node *a, t_stack_node *b)
{
	int len_a;
	int	len_b;

	len_a = stack_len(a);
	len_b = stack_len(b);
	while(a)
	{
		a->push_cost = a->pos;
		if (!a->mid)
			a->push_cost = len_a - (a->pos);
		if (a->target_node->mid)
			a->push_cost = len_a - (a->pos);
		else 
			a->push_cost = a->target_node->pos;
		a = a->next;
	}
}

void	set_cheap(t_stack_node *stack)
{
	long	cheap_val;
	t_stack_node	*cheap_node;

	if(!stack)
		return;
	cheap_val = LONG_MAX;
	while (stack)
	{
		if (stack->push_cost < cheap_val)
		{
			cheap_val = stack->push_cost;
			cheap_node = stack;
		}
		stack = stack->next;
	}
	cheap_node->cheapst = true;
}

void	init_a(t_stack_node *a, t_stack_node *b)
{
	current_index(a);
	current_index(b);
	set_target_a(a, b);
	cost_analysis_a(a, b);
	set_cheap(a);
}

