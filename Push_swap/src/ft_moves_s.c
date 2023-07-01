/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraccane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 11:50:32 by eraccane          #+#    #+#             */
/*   Updated: 2023/06/30 11:09:48 by eraccane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_sa(t_Stack *a)
{
	int	temp;

	if (a->size >= 1)
	{
		temp = a->collection[a->top];
		a->collection[a->top] = a->collection[a->top - 1];
		a->collection[a->top - 1] = temp;
	}
	ft_print_sa();
}

void	ft_sb(t_Stack *b)
{
	int	temp;

	if (b->size >= 1)
	{
		temp = b->collection[b->top];
		b->collection[b->top] = b->collection[b->top - 1];
		b->collection[b->top - 1] = temp;
	}
	ft_print_sb();
}

void	ft_ss(t_Stack *a, t_Stack *b)
{
	int	temp;

	if (a->size <= 1)
	{
		temp = b->collection[b->top];
		b->collection[b->top] = b->collection[b->top - 1];
		b->collection[b->top - 1] = temp;
	}
	if (b->size <= 1)
	{
		temp = a->collection[a->top];
		a->collection[a->top] = a->collection[a->top - 1];
		a->collection[a->top - 1] = temp;
	}
	if (b->size >= 1 && a->size >= 1)
	{
		temp = b->collection[b->top];
		b->collection[b->top] = b->collection[b->top - 1];
		b->collection[b->top - 1] = temp;
		temp = a->collection[a->top];
		a->collection[a->top] = a->collection[a->top - 1];
		a->collection[a->top - 1] = temp;
	}
	ft_print_ss();
}
