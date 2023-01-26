/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <ngennaro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 06:11:55 by ngennaro          #+#    #+#             */
/*   Updated: 2023/01/26 08:38:08 by ngennaro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_list **list)
{
	if (!is_sort(*list))
		sa(list);
}

void	sort_3(t_list **list)
{
	if (is_sort(*list))
		return ;
	if ((*list)->pos == 0)
		ft_printf("pa\nsa\npb");

	if ((*list)->pos == 2)
	{
		ra(list);
		if (is_sort(*list))
			return ;
		ft_printf("sa\n");
	}
}
