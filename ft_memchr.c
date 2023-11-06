/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemaldo <maemaldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:27:27 by maemaldo          #+#    #+#             */
/*   Updated: 2023/11/06 16:32:19 by maemaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memchr(const void *s, int c, size_t n)
{
	int	i;
	char *ptr;

	ptr = s;
	i = 0;
	while (i < n)
	{
		if (*ptr == c)
			return (*ptr)
		i++;
		ptr++;
	}
	return (NULL);
}