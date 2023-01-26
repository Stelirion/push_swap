/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <ngennaro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 18:14:13 by ngennaro          #+#    #+#             */
/*   Updated: 2023/01/26 08:28:51 by ngennaro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_size(t_list *stack)
{
	int	size;

	size = 0;
	while (stack && stack->pos != -1)
	{
		stack = stack->next;
		size++;
	}
	return (size);
}

int	is_sort(t_list	*stack)
{
	int	i;

	i = stack->pos;
	while (stack->pos != -1)
	{
		if (stack->pos != i)
			return (0);
		stack = stack->next;
		i++;
	}
	return (1);
}

int	is_sort_end(t_list	*stack)
{
	int	i;

	i = stack->pos;
	while (stack != NULL)
	{
		if (stack->pos == -1)
		{
			stack = stack->next;
			continue ;
		}
		if (stack->pos != i)
			return (0);
		stack = stack->next;
		i++;
	}
	return (1);
}

void	radix(t_list **a)
{
	t_list	*b;
	int		i;
	int		j;
	int		size;

	b = ft_lstnew_pos(-1);
	i = 0;
	size = stack_size(*a);
	while (!is_sort(*a))
	{
		j = 0;
		while (j < size && is_sort_end(*a) == 0)
		{
			if (((*a)->pos >> i) % 2 == 1)
				ra(a);
			else
				pb(a, &b);
			j++;
		}
		if (is_sort_end(*a) == 0)
			ra(a);
		while (b->pos != -1)
			pa(a, &b);
		i++;
	}
}
