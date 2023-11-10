/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemaldo <maemaldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:43:57 by maemaldo          #+#    #+#             */
/*   Updated: 2023/11/09 12:50:47 by maemaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *str;
	int i;
	char *res;

	i = 0;
	str = malloc(sizeof(char) * (ft_strlen((char *)s)+1));
	res = str;
	if (!str)
		return (NULL);
	while (s[i])
	{
		*str = f(i, *s);
		i++;
		str++;
		s++;
	}
	return (res);
}
