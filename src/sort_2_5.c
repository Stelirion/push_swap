/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_2_5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <ngennaro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 06:11:55 by ngennaro          #+#    #+#             */
/*   Updated: 2023/02/08 07:16:09 by ngennaro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

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
	int		i;
	t_list	*b;

	b = ft_lstnew_pos(-1);
	i = 0;
	while (i < 2)
	{
		if ((*list)->pos == 0 || (*list)->pos == 1)
		{
			pb(list, &b);
			i++;
		}
		else
			ra(list);
	}
	if (b->pos == 0)
		ft_printf("sb\n");
	convert_index(*list);
	sort_3(*list);
	ft_printf("pa\npa\n");
	ft_lstfree(b);
}
