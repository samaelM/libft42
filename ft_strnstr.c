/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemaldo <maemaldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:53:27 by maemaldo          #+#    #+#             */
/*   Updated: 2023/11/13 12:33:18 by maemaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdlib.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	int i;
	int j;
	i = 0;
	if (!little[0])
		return ((char *)big);
	while (big[i] && len - i > 0)
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (big[i+j] && big[i+j] == little[j] && len - (i + j) > 0)
			{
				j++;
				if (little[j] == '\0')
					return ((char *)&big[i]);
			}
		}
		i++;
	}
	return (NULL);
}
