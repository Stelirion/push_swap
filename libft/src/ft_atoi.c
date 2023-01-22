/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <ngennaro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:50:47 by ngennaro          #+#    #+#             */
/*   Updated: 2023/01/22 16:53:21 by ngennaro         ###   ########lyon.fr   */
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
		if (str[i] == '-')
			k = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (res != (res * 10 + (k * (str[i] - '0'))) / 10)
			return (write(1, "Error\n", 6), exit (0), 1);
		res = res * 10 + ((str[i] - '0') * k);
		i++;
	}
	return (res);
}
