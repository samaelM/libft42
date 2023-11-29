/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemaldo <maemaldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:10:37 by maemaldo          #+#    #+#             */
/*   Updated: 2023/11/28 12:20:15 by maemaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *cell;

	if (!(cell = (t_list*)malloc(sizeof(*cell))))
		return (NULL);
	cell->content = content;
	cell->next = NULL;
	return (cell);
}
