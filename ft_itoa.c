/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemaldo <maemaldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:38:43 by maemaldo          #+#    #+#             */
/*   Updated: 2023/11/16 14:10:58 by maemaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_itoa(int n)
{
	int nlen;
	long num;
	long temp;
	char *res;
	
	if (n == 0)
	{
		res = malloc(2 * sizeof(char));
		if (!res)
			return NULL;
		res[0] = '0';
		res[1] = '\0';
		return res;
	}

	nlen = (n < 0) ? 1 : 0;
	num = (n < 0) ? -(long)n : n;

	temp = num;
	while (temp > 0)
	{
		temp /= 10;
		nlen++;
	}

	res = malloc((nlen + 1) * sizeof(char));
	if (!res)
		return NULL;

	res[nlen] = '\0';
	nlen--;

	temp = num;

	if (n < 0)
	{
		res[0] = '-';
	}

	while (nlen >= 0)
	{
		if (temp > 0)
			res[nlen] = '0' + (temp % 10);
		temp /= 10;
		nlen--;
	}

	return res;
}