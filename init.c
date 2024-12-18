/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:01:17 by rmamisoa          #+#    #+#             */
/*   Updated: 2024/12/18 14:45:49 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long	ft_atol(const char *s)
{
	int	i;
	long res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (s[i] == 32 || (s[i] >= 9 && s[i] <= 13))
		i++;
	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign -= 1;
		i++;
	}
	while (ft_isdigit(s[i]))
		res = res * 10 + (s[i++] - 48);
	return (res * sign);
}

static void	append_node(t_stack_node **stack, int n)
{
	t_stack_node	*node;
	t_stack_node	*last_node;

	if (!stack)
		return;
	node = malloc(sizeof(t_stack_node));
	if (!node)
		return;
	node->next = NULL;
	node->data = n;
	if (!(*stack)) 
	{
		*stack = node;
		node->prev = NULL;
	}
	else 
	{
		last_node = find_last(*stack);
		last_node->next = node;
		node->prev = last_node;
	}

}

void	init(t_stack_node **a, char **av)
{
	long	n;
	int	i;

	i = 0;
	while(av[i])
	{
		if (err_syntax(av[i])) 
			err_free(a);
		n = ft_atol(av[i]);
		if (n > INT_MAX || n < INT_MIN)
			err_free(a);
		if (err_dup(*a, (int)n))
			err_free(a);
		append_node(a, (int)n);
		i++;
	}
}
