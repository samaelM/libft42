/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemaldo <maemaldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:01:02 by maemaldo          #+#    #+#             */
/*   Updated: 2023/11/08 14:40:48 by maemaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>

int ft_atoi(const char *nptr);
void ft_bzero(void *s, size_t n);
void *ft_calloc(size_t nmemb, size_t size);
int ft_isalnum(char c);
int ft_isdigit(char c);
void	*ft_memset(void *s, int c, size_t n);
char *ft_strdup(const char *s);
int ft_strlen(char *str);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
char *ft_strjoin(char const *s1, char const *s2);
size_t ft_strlcat(char *dst, const char *src, size_t size);

#endif
