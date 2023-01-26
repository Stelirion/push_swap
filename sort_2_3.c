/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_2_3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <ngennaro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 06:11:55 by ngennaro          #+#    #+#             */
/*   Updated: 2023/01/26 09:10:30 by ngennaro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_list **list)
{
	if (!is_sort(*list))
		sa(list);
}

void	sort_3(t_list *list)
{
	int	a;
	int	b;
	int	c;

	a = list->pos;
	list = list->next;
	b = list->pos;
	list = list->next;
	c = list->pos;
	if (a == 0 && b == 2 && c == 1)
		ft_printf("pb\nsa\npa\n");
	else if (a == 1 && b == 2 && c == 0)
		ft_printf("rra\n");
	else if (a == 1 && b == 0 && c == 2)
		ft_printf("sa\n");
	else if (a == 2 && b == 0 && c == 1)
		ft_printf("ra\n");
	else if (a == 2 && b == 1 && c == 0)
		ft_printf("ra\nsa\n");
}
