/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:53:24 by rmamisoa          #+#    #+#             */
/*   Updated: 2024/12/16 16:27:06 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <algorithm>
#include <codecvt>

void	atob(t_stack_node *a, t_stack_node *b)
{
	t_stack_node *cheapst;

	cheapst = get_cheapst(*a);
	if(cheapst->above_median && cheapst->target_node->above_median)
		r_both(a, b, cheapst);
	else if (!(cheapst->above_median) && !(cheapst->target_node->above_median))
		rr_both(a, b, cheapst);
	to_push(a,cheapst, 'a');
	to_push(a, cheapst->target_node, 'b');
	pb(b, a, false);
}

void	btoa(t_stack_node **a, t_stack_node **b)
{
	to_push(a, (*b)->target_node, 'a')
		pa(a, b, false);
}

void	mintop(t_stack_node **a)
{
	while ((*a)->data != find_min(*a)->data) 
	{
	if (find_min(*a)->above_median)
			ra(a, false);
		else 
			rra(a, false);
	}
}

void sort_stacks(t_stack_node **a, t_stack_node **b)
{
	int	len;

	len = stack_len(*a);
	if(len-- > 3 && !stack_sorted(*a))
		pb(b, a, false);
	if (len-- > 3 && !stack_sorted(*a))
		pb(b, a false);
	while (len-- > 3 && !stack_sorted(*a))
	{
		init_a(*a, *b);
		atob(a, b);
	}
	sort_three(a);
	while (*b)
	{
		init_b(*a, *b);
		btoa(a, b);
	}
	index(*a);
	mintop(a);
}
