/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <ngennaro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 02:54:22 by ngennaro          #+#    #+#             */
/*   Updated: 2023/01/26 06:18:08 by ngennaro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_printlist_index(t_list *i)
{
	while (i)
	{
		ft_printf("%i\n", i->pos);
		i = i->next;
	}
}

size_t	lst_size(t_list *list)
{
	size_t	i;

	i = 0;
	while (list)
	{
		i++;
		list = list->next;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	t_list	*list;
	size_t	size;

	if (argc == 2)
		list = parse_one(argv[1]);
	if (argc > 2)
		list = parse_multiple(argv);
	check_double(list);
	convert_index(list);
	size = lst_size(list);
	ft_lstadd_back (&list, ft_lstnew_pos(-1));
	if (size == 2)
		sort_2(&list);
	if (size == 3)
		sort_2(&list);
	if (size > 5)
		radix(&list);
}
