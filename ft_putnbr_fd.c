/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemaldo <maemaldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:03:25 by maemaldo          #+#    #+#             */
/*   Updated: 2023/11/16 16:56:36 by maemaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*                                 (\_/)                                        */
/*                                 (0.0)                                        */
/*                                 />$<\                                        */
/*           $$$$$$\   $$$$$$\  $$\      $$\  $$$$$$\  $$$$$$$$\ $$\            */
/*          $$  __$$\ $$  __$$\ $$$\    $$$ |$$  __$$\ $$  _____|$$ |           */
/*          $$ /  \__|$$ /  $$ |$$$$\  $$$$ |$$ /  $$ |$$ |      $$ |           */
/*          \$$$$$$\  $$$$$$$$ |$$\$$\$$ $$ |$$$$$$$$ |$$$$$\    $$ |           */
/*           \____$$\ $$  __$$ |$$ \$$$  $$ |$$  __$$ |$$  __|   $$ |           */
/*          $$\   $$ |$$ |  $$ |$$ |\$  /$$ |$$ |  $$ |$$ |      $$ |           */
/*          \$$$$$$  |$$ |  $$ |$$ | \_/ $$ |$$ |  $$ |$$$$$$$$\ $$$$$$$$\      */
/*           \______/ \__|  \__|\__|     \__|\__|  \__|\________|\________|     */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	char *res;

	res = ft_itoa(n);
	ft_putstr_fd(res, fd);
	free(res);
}