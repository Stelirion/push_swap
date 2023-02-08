/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <ngennaro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:50:47 by ngennaro          #+#    #+#             */
/*   Updated: 2023/02/08 19:16:57 by ngennaro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

static void	free_tab(char **tab)
{
	int	i;

	if (!tab)
		return ;
	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
}

static void	return_error(t_list *list, char **tab)
{
	write(1, "Error\n", 6);
	ft_lstfree(list);
	free_tab(tab);
	exit (0);
}

int	ft_atoi(const char *str, t_list *list, char **tab)
{
	size_t	i;
	int		k;
	int		res;

	i = 0;
	k = 1;
	res = 0;
	if (str[i] == '-')
	{
		k = -1;
		i++;
		if (!str[i])
			return_error(list, tab);
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (res != (res * 10 + (k * (str[i] - '0'))) / 10)
			return_error(list, tab);
		res = res * 10 + ((str[i] - '0') * k);
		i++;
	}
	if (str[i])
		return_error(list, tab);
	return (res);
}
