/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <ngennaro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 17:02:11 by ngennaro          #+#    #+#             */
/*   Updated: 2023/02/08 19:17:51 by ngennaro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

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
	t_list	*new;
	char	**tab;
	int		i;
	int		j;

	tab = ft_split(arg, ' ');
	i = -1;
	list = NULL;
	while (tab[++i])
	{
		j = 0;
		while (tab[i][j])
		{
			if (!ft_isdigit(tab[i][j]) && tab[i][j] != '-')
				return (free_tabs(tab), ft_lstfree(list), \
				ft_printf("Error\n"), exit (0), list);
			j++;
		}
		new = ft_lstnew(ft_atoi(tab[i], list, tab));
		if (!new)
			return (ft_lstfree(list), exit(0), list);
		ft_lstadd_back (&list, new);
	}
	return (free_tabs(tab), list);
}

t_list	*parse_multiple(char **arg)
{
	t_list	*list;
	t_list	*new;
	int		i;
	int		j;

	i = 1;
	list = NULL;
	while (arg[i])
	{
		j = 0;
		while (arg[i][j])
		{
			if (!ft_isdigit(arg[i][j]) && arg[i][j] != '-')
				return (ft_printf("Error\n"), ft_lstfree(list), exit (0), list);
			j++;
		}
		new = ft_lstnew(ft_atoi(arg[i], list, NULL));
		if (!new)
			return (ft_lstfree(list), exit(0), list);
		ft_lstadd_back (&list, new);
		i++;
	}
	return (list);
}

void	check_double(t_list *list)
{
	t_list	*current;
	t_list	*runner;
	int		i;

	current = list;
	while (current)
	{
		i = 0;
		runner = list;
		while (runner)
		{
			if (runner->content == current->content)
				i++;
			if (i == 2)
			{
				ft_printf("Error\n");
				ft_lstfree(list);
				exit (0);
			}
			runner = runner->next;
		}
		current->pos = i;
		current = current->next;
	}
}

void	convert_index(t_list *list)
{
	t_list	*current;
	t_list	*runner;
	int		i;

	current = list;
	while (current)
	{
		i = 0;
		runner = list;
		while (runner)
		{
			if (runner->content < current->content)
				i++;
			runner = runner->next;
		}
		current->pos = i;
		current = current->next;
	}
}
