/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <ngennaro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 02:54:22 by ngennaro          #+#    #+#             */
/*   Updated: 2023/02/08 07:29:58 by ngennaro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

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

int	is_sort_total(t_list	*stack)
{
	while (stack->next)
	{
		if (stack->content < stack->next->content)
			stack = stack->next;
		else
			return (0);
	}
	return (1);
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
	if (is_sort_total (list))
		return (ft_lstfree (list), exit(0), 0);
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
	ft_lstfree(list);
}
