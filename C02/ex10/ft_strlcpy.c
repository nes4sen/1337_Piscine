/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 18:57:21 by yourLogin         #+#    #+#             */
/*   Updated: 2023/12/18 19:31:51 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	char	*lenght;

	i = 0;
	lenght = dest;
	if (size == 0)
		return (0);
	while (*src && size - 1 > 0)
	{
		*dest++ = *src++;
		size--;
	}
	*dest = '\0';
	while (*lenght)
	{
		i++;
		lenght++;
	}
	return (i);
}
