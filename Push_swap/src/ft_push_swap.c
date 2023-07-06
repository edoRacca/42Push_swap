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

void	ft_init(t_Stack_node **stack, int n, char *s[])
{
	int	i;
	int	j;
	
	i = 1;
	j = n - 1;
	while (i < n)
	{
		ft_add_node(stack, ft_atoi(s[j]));
		i++;
		j--;
	}
}

void	ft_push_swap(int n, char *s[])
{
	t_Stack_node	*a;
	t_Stack_node	*b;

	a = NULL;
	b = NULL;
	ft_init(&a, n, s);
	//ft_start_swap(a, b);
	ft_add_node(&b, 12);
	ft_push_node(&a, &b);
	ft_print_stack(a);
	ft_free_stack(a);
	ft_free_stack(b);
}
