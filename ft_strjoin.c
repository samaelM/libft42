/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemaldo <maemaldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:05:36 by maemaldo          #+#    #+#             */
/*   Updated: 2023/11/08 13:03:33 by maemaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t r1size;
	size_t size;
	char *res;
	size = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	res = malloc(size * sizeof(char));
	r1size = ft_strlcpy(res, s1, size);
	ft_strlcpy(res+r1size, s2, ft_strlen((char *)s2)+1);
	return (res);
}
