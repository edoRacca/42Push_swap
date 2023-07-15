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
	
	i = n - 1;
	while (i > 0)
	{
		ft_add_node(stack, ft_new_node(ft_atoi(s[i])));
		i--;
	}
}

void	ft_push_swap(int n, char *s[])
{
	t_Stack_node	*a;
	t_Stack_node	*b;

	a = NULL;
	b = NULL;
	ft_init(&a, n, s);
	ft_add_node(&b, ft_new_node(30));
    ft_add_node(&b, ft_new_node(40));
    ft_add_node(&b, ft_new_node(50));
	// ft_start_swap(a, b);
    // ft_sa(&a);
    // ft_sb(&b);
    //ft_ss(&a, &b);
    // ft_rra(&a);
    // ft_rrb(&b);
    // ft_rrr(&a, &b);
    ft_rra(&a);
    // ft_rr(&a, &b);
	ft_print_stack(a);
    ft_printf("\n");
	ft_print_stack(b);
	ft_free_stack(a);
	ft_free_stack(b);
}
