/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <ngennaro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 02:54:22 by ngennaro          #+#    #+#             */
/*   Updated: 2023/01/22 06:17:09 by ngennaro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	ft_printlist(t_list *i)
{
	while (i)
	{
		printf("%i\n", i->content);
		i = i->next;
	}
}

int	free_tabs(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (1);
}

t_list	*parse_one(char *arg)
{
	t_list	*list;
	char	**tab;
	int		i;
	int		j;

	tab = ft_split(arg, ' ');
	list =ft_lstnew(-1);
	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			if (!ft_isdigit(tab[i][j]) && tab[i][j] != '-')
			{
				free_tabs(tab);
				exit (0);
			}
			j++;
		}
		ft_lstadd_back (&list, ft_lstnew(ft_atoi(tab[i])));
		i++;
	}
	return (list);
}

int	main(int argc, char **argv)
{
	t_list	*list;

	if (argc == 2)
		list = parse_one(argv[1]);
	ft_printlist(list);
}
