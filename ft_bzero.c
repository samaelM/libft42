/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemaldo <maemaldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:17:57 by maemaldo          #+#    #+#             */
/*   Updated: 2023/11/08 11:29:25 by maemaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	size_t	i;
	char *ptr;

	ptr = s;
	i = 0;
	while (i < n)
	{
		*ptr = 0;
		i++;
		ptr++;
	}
}
