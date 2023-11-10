/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemaldo <maemaldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:36:51 by maemaldo          #+#    #+#             */
/*   Updated: 2023/11/09 14:55:56 by maemaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size)
{
	void *dest;
	dest = malloc(nmemb * size);
	if (dest == NULL)
		return (NULL);
	ft_memset(dest, 0, nmemb * size);
	return (dest);
}
