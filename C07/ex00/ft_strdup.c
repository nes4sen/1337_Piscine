/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:05:54 by yourLogin         #+#    #+#             */
/*   Updated: 2024/01/25 19:38:56 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str++)
		count++;
	return (count);
}

void	ft_strcpy(char *src, char *dest)
{
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
}

char	*ft_strdup(char *src)
{
	char	*p;
	int		len;

	if (!src)
		return (NULL);
	len = ft_strlen(src);
	p = (char *)malloc(len + 1);
	ft_strcpy(src, p);
	return (p);
}
