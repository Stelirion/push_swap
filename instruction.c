/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <ngennaro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:24:19 by ngennaro          #+#    #+#             */
/*   Updated: 2023/01/25 15:17:16 by ngennaro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list *a, t_list *b)
{
	t_list	*temp;

	if (b->pos != -1)
		ft_printf("pa\n");
	temp = b;
	b = b->next;
	temp->next = a;
	a = temp;
}

void	pb(t_list *a, t_list *b)
{
	t_list	*temp;

	if (a->pos != -1)
		ft_printf("pb\n");
	temp = a;
	a = a->next;
	temp->next = b;
	b = temp;
}
