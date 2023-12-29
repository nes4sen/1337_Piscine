/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 20:02:11 by yourLogin         #+#    #+#             */
/*   Updated: 2023/12/25 20:09:22 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char	*start;
	int	i;
	start = dest;
	while (*start)
		start++;
	while (*src && size > 0)
	{
		*start++ = *src++;
		size--
		i++;
	}
	start = '\0';
	return (i - 1);
}
