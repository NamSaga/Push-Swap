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

typedef struct	s_stack_node
{
	int	data;
	int	pos;
	int	push_cost;
	bool	mid;
	bool	low;
	struct s_stack_node	*target_node;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}	t_stack_node;

#endif
