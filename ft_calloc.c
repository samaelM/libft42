/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemaldo <maemaldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:36:51 by maemaldo          #+#    #+#             */
/*   Updated: 2023/11/14 11:55:21 by maemaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size)
{
	void *dest;
	dest = (void *)malloc(nmemb * size);
	if (dest == NULL)
		return (NULL);
	ft_bzero(dest, nmemb);
	return (dest);
}
