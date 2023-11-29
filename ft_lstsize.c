/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemaldo <maemaldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:40:41 by maemaldo          #+#    #+#             */
/*   Updated: 2023/11/28 11:49:49 by maemaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int i;

	i = 0;
	if (!lst)
		return(i);
	while (lst->next != NULL)
	{
		i++;
		lst = lst->next;
	}
	i++;
	return (i);
}