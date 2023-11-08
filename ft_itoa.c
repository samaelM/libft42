/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemaldo <maemaldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:38:43 by maemaldo          #+#    #+#             */
/*   Updated: 2023/11/08 11:29:42 by maemaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_itoa(int n)
{
	char *res;
	int nlen;
	int num;
	num = n;
	nlen = 0;
	if (n < 0)
	{
		nlen++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		nlen++;
	}
	res = malloc(nlen * sizeof(char));
	res[nlen] = '\0';
	nlen--;
	if (num < 0)
	{
		res[0] = '-';
		num = -num;
	}
	while (nlen >= 0)
	{
		if (num > 0)
			res[nlen] = '0' + (num % 10);
		num /= 10;
		nlen--;
	}
	return (res);
}
