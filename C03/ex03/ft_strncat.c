/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 15:24:55 by yourLogin         #+#    #+#             */
/*   Updated: 2023/12/25 16:48:52 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*start;

	start = dest;
	if (nb == 0)
		return (dest);
	while (*start)
		start++;
	while (*src && nb > 0)
	{
		*start++ = *src++;
		nb--;
	}
	*start = '\0';
	return (dest);
}
