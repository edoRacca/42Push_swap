/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraccane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 11:50:32 by eraccane          #+#    #+#             */
/*   Updated: 2023/06/30 11:11:02 by eraccane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_sort_2(t_Stack_node *a)
{
	if (ft_check_sorted(a) == 0)
		ft_sa(a);
}

void	ft_start_swap(t_Stack_node *a, t_Stack_node *b)
{
	// if (a->size == 2)
	// 	ft_sort_2(a);
	// else if (a->size == 3)
	// 	ft_sort_3(a);
	// else
	// 	ft_sort_all(a, b);
}

void	ft_push_swap(int n, char *s[])
{
	t_Stack_node	*a;
	t_Stack_node	*b;
	int		i;
	int		j;

	a = NULL;
	b = NULL;
	i = 0;
	j = n - 1;
	while (i < a->capacity)
	{
		ft_push(a, ft_atoi(s[j]));
		i++;
		j--;
	}
	ft_start_swap(a, b);
	ft_free_stack(a);
	ft_free_stack(b);
}
