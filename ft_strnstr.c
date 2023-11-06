/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemaldo <maemaldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:53:27 by maemaldo          #+#    #+#             */
/*   Updated: 2023/11/06 18:10:03 by maemaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *ft_strnstr(char *big, const char *little, size_t len)
{
	int i;
	int j;
	i = 0;
	if (!little[0])
		return (big);
	while (big[i])
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (big[i+j] && big[i+j] == little[j])
			{
				j++;
				if (little[j] == '\0')
					return (&big[i]);
			}
		}
		i++;
	}
	return (NULL);
}
void main(int ac, char** av)
{
	printf("%s", ft_strnstr(av[1], av[2],5));
}