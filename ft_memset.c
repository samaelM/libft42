/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemaldo <maemaldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:20:03 by maemaldo          #+#    #+#             */
/*   Updated: 2023/11/08 10:26:43 by maemaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char *ptr;

	ptr = s;
	i = 0;
	while (i < n)
	{
		*ptr = c;
		i++;
		ptr++;
	}
	return (s);
}
