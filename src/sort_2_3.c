/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_2_3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <ngennaro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 06:11:55 by ngennaro          #+#    #+#             */
/*   Updated: 2023/02/08 05:02:06 by ngennaro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"



void	ft_printlist_index2(t_list *i)
{
	while (i)
	{
		ft_printf("%i\n", i->pos);
		i = i->next;
	}
}


void	sort_2(t_list **list)
{
	if (!is_sort(*list))
		write (1, "sa\n", 3);
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
		ft_printf("rra\nsa\n");
	else if (a == 1 && b == 2 && c == 0)
		ft_printf("rra\n");
	else if (a == 1 && b == 0 && c == 2)
		ft_printf("sa\n");
	else if (a == 2 && b == 0 && c == 1)
		ft_printf("ra\n");
	else if (a == 2 && b == 1 && c == 0)
		ft_printf("ra\nsa\n");
}

void	sort_4(t_list **list)
{
	while ((*list)->pos != 0)
		ra(list);
	write(1, "pb\n", 3);
	convert_index((*list)->next);
	sort_3((*list)->next);
	write(1, "pa\n", 3);
}

void	sort_5(t_list **list)
{
	while ((*list)->pos != 0)
		ra(list);
	write(1, "pb\n", 3);
	while ((*list)->pos != 1)
		ra(list);
	write(1, "pb\n", 3);
	convert_index((*list)->next);
	sort_3((*list)->next);
	write(1, "pa\n", 3);
	write(1, "pa\n", 3);
	(void) list;
}
