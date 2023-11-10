/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemaldo <maemaldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:06:33 by maemaldo          #+#    #+#             */
/*   Updated: 2023/11/10 14:38:04 by maemaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t ssrc;
	(void) size;

	ssrc = ft_strlen((char *)src);
	ft_strlcpy(dst+ft_strlen(dst), src, ssrc+1);
	return (ft_strlen(dst));
}
