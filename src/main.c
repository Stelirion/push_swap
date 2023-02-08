/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <ngennaro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 02:54:22 by ngennaro          #+#    #+#             */
/*   Updated: 2023/02/08 04:52:42 by ngennaro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

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
	if(is_sort_total(list))
	{
		ft_lstfree (list);
		exit (0);
	}
	size = lst_size(list);
	if (size == 2)
		sort_2(&list);
	else if (size == 3)
		sort_3(list);
	else if (size == 4)
		sort_4(&list);
	else if (size == 5)
		sort_5(&list);
	else if (size > 5)
		radix(&list);
	//ra(&list);
	ft_lstfree(list);
}
