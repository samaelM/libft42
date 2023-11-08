/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemaldo <maemaldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:58:35 by maemaldo          #+#    #+#             */
/*   Updated: 2023/11/08 11:29:31 by maemaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_isalnum(char c)
{
    if ((c > 64 && c <91) || (c > 96 && c <123) || (c >= '0' && c <= '9'))
        return (1);
    return (0);
}