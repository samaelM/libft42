/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemaldo <maemaldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:01:52 by maemaldo          #+#    #+#             */
/*   Updated: 2023/11/10 12:17:09 by maemaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	trim_len(char const *s1, char  const *set)
{
	int i;
	int slen;
	int setlen;
	int j;

	slen = ft_strlen(s1);
	setlen = ft_strlen(set);
	i =0;
	while (s[i] && s[i] == set[0])
	{
		j = 0;
		while (s[i + j] && s[i + j] == set[j])
		{
			j++;
			if (!set[j])
				slen -= setlen;
		}
		
	}
}

char *ft_strtrim(char const *s1, char const *set)
{
	char *res;
	int i;

	res = malloc(ft_strlen(s1) * sizeof(char));
	if (s1 != NULL)
	{
		i = 0;
	}
	while (s1[i])
	{
		
	}
}