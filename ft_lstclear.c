/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemaldo <maemaldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:55:53 by maemaldo          #+#    #+#             */
/*   Updated: 2023/11/29 13:59:43 by maemaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *next_cell;
	if (*lst && del)
	{
		while (*lst)
		{
			(*del)((*lst)->content);
			next_cell = (*lst)->next;
			free(*lst);
			*lst = next_cell;
		}
	}
}
