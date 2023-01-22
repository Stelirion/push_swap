/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <ngennaro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 02:54:22 by ngennaro          #+#    #+#             */
/*   Updated: 2023/01/22 17:55:10 by ngennaro         ###   ########lyon.fr   */
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

int	main(int argc, char **argv)
{
	t_list	*list;

	if (argc == 2)
		list = parse_one(argv[1]);
	if (argc > 2)
		list = parse_multiple(argv);
	check_double(list);
	convert_index(list);
	ft_lstadd_back (&list, ft_lstnew_pos(-1));
	ft_printlist_index(list);
}
