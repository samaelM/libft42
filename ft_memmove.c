/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemaldo <maemaldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:29:11 by maemaldo          #+#    #+#             */
/*   Updated: 2023/11/10 14:36:48 by maemaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	char *d = dest;
  	const char *s = src;
	if (d < s)
	while (n--)
		*d++ = *s++;
	else
	{
		char *lasts = (char *)s + (n-1);
		char *lastd = d + (n-1);
	while (n--)
		*lastd-- = *lasts--;
	}
	return dest;
}
