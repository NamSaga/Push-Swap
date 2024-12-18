/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 14:35:54 by rmamisoa          #+#    #+#             */
/*   Updated: 2024/12/10 15:24:10 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

typedef struct s_node {
	int	data;
	struct s_node* next;
} t_node;

void	sa(t_node* *head)
{
	t_node* first = *head;
	t_node* second = (*head)->next;
	

	if (head == NULL)
		return;
	if (first->data > second->data) {
		first->next = second->next;
		second->next = first;
		*head = second;
	}
}
