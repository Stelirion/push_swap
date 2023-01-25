/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <ngennaro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:02:33 by ngennaro          #+#    #+#             */
/*   Updated: 2023/01/25 15:22:50 by ngennaro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <signal.h>
# include "libft/headers/libft.h"
# include "libft/headers/ft_printf.h"
# include "libft/headers/get_next_line_bonus.h"

t_list	*parse_one(char *arg);
t_list	*parse_multiple(char **arg);
void	convert_index(t_list *list);
void	check_double(t_list *list);
void	radix(t_list *a);
void	pa(t_list *a, t_list *b);
void	pb(t_list *a, t_list *b);
void	ft_printlist_index(t_list *i);

#endif
