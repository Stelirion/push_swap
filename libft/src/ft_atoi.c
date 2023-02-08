/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <ngennaro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:50:47 by ngennaro          #+#    #+#             */
/*   Updated: 2023/02/08 12:57:25 by ngennaro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

int	ft_atoi(const char *str)
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
			return (write(1, "Error\n", 6), exit (0), 1);
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (res != (res * 10 + (k * (str[i] - '0'))) / 10)
			return (write(1, "Error\n", 6), exit (0), 1);
		res = res * 10 + ((str[i] - '0') * k);
		i++;
	}
	if (str[i])
		return (write(1, "Error\n", 6), exit (0), 1);
	return (res);
}
