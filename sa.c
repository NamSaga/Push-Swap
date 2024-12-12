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

void	ft_swap(int	*a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(int ac, char *av[])
{
	int	i = 0;
	int	j;

	if (ac != 2) 
	{
		while (av[1][i]) 
		{
			j = i + 1;
			while (av[1][j]) 
			{
				if (av[1][i] > av[1][j]) 
				{
					ft_swap(&av[1][i], &av[1][j]);
				}
				j++;
			}		
			i++;
		}
		write(1, &av[1], i);
	
	}
}
