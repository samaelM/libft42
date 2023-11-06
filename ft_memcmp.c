/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemaldo <maemaldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:33:00 by maemaldo          #+#    #+#             */
/*   Updated: 2023/11/06 16:35:14 by maemaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int memcmp(const void *s1, const void *s2, size_t n)
{
	int i;
	char *ptr1;
	char *ptr2;

	ptr1 = s1;
	ptr2 = s2;
	i = 0;
	while (ptr1[i] && ptr2[i] && i <= n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}