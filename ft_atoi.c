/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemaldo <maemaldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:35:42 by maemaldo          #+#    #+#             */
/*   Updated: 2023/11/08 10:36:48 by maemaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_atoi(const char *nptr)
{
	int i;
	int res;
	int sign;

	res = 0;
	sign = 1;
	i = 0;
	while (nptr[i] && nptr[i] == ' ')
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] && (nptr[i] >= '0' && nptr[i] <= '9'))
	{
		res = (res * 10) + nptr[i] - '0';
		i++;
	}
	return (res * sign);
}
