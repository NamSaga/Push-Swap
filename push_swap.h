xz/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa@student.42antananarivo            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 20:54:56 by rmamisoa          #+#    #+#             */
/*   Updated: 2024/08/02 13:51:20 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H


# include <stdbool.h>
# include "libft/libft.h"
# include "printf/ft_printf.h"
#include <limits.h>

typedef struct	s_stack_node
{
	int	data;
	int	pos;
	int	push_cost;
	bool	mid;
	bool	cheapst;
	struct s_stack_node	*target_node;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}	t_stack_node;

//sort stacks

void	atob(t_stack_node *a, t_stack_node *b);
void	btoa(t_stack_node **a, t_stack_node **b);
void	mintop(t_stack_node **a);
void sort_stacks(t_stack_node **a, t_stack_node **b);

//sort three
void	sort_three(t_stack_node **a);

//init a to b
void	current_index(t_stack_node *stack);
static void	set_target_a(t_stack_node *a, t_stack_node *b);
static	void	cost_analysis_a(t_stack_node *a, t_stack_node *b);
void	set_cheap(t_stack_node *stack);
void	init_a(t_stack_node *a, t_stack_node *b);

//init b to a
static void		set_target_b(t_stack_node *a, t_stack_node *b);
void init_b(t_stack_node *a, t_stack_node *b);

//utils
bool	stack_sorted(t_stack_node *stack);
t_stack_node	*find_min(t_stack_node *stack);

//stack init
static long	ft_atol(const char *s)
static void	append_node(t_stack_node **stack, int n);
void	init(t_stack_node **a, char **av);


#endif
































