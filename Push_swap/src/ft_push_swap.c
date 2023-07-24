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

void	ft_start_swap(t_Stack_node **a, t_Stack_node **b)
{
	if (ft_check_sorted(*a) == 1)
		return ;
	if (ft_stack_size(*a) == 2)
		ft_sa(a);
	else if (ft_stack_size(*a) == 3)
		ft_swap_3(a);
	else if (ft_stack_size(*a) < 6)
		ft_simple_swap(a, b);
	else
		ft_big_swap(a, b);
}

// Inizialise stack 'a' with av values
void	ft_init(t_Stack_node **stack, int n, char *s[], int flag)
{
	int	i;

	i = n - 1;
	if (flag == 1)
	{
		while (i >= 0)
		{
			ft_add_node(stack, ft_new_node(ft_atoi(s[i])));
			i--;
		}
	}
	else
	{
		while (i > 0)
		{
			ft_add_node(stack, ft_new_node(ft_atoi(s[i])));
			i--;
		}
	}
}

void	ft_push_swap(int n, char *s[], int flag)
{
	t_Stack_node	*a;
	t_Stack_node	*b;

	a = NULL;
	b = NULL;
	ft_init(&a, n, s, flag);
	ft_start_swap(&a, &b);
	ft_free_stack(a);
	ft_free_stack(b);
}
