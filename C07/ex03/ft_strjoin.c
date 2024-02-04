/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 15:02:59 by yourLogin         #+#    #+#             */
/*   Updated: 2024/02/04 17:30:22 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str++)
		count++;
	return (count);
}

void	ft_allocat(int size, char **strs, char *sep, char *p)
{
	int	i;
	int	j;
	int	k;
	int	s;

	i = 0;
	j = 0;
	k = 0;
	while (j < size)
	{
		while (strs[j][i])
			*(p + k++) = strs[j][i++];
		s = 0;
		while (sep[s] && j < (size - 1))
			*(p + k++) = sep[s++];
		i = 0;
		j++;
	}
	*(p + k) = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*p;
	int		len;
	int		i;

	if (size < 0)
		return (NULL);
	len = 0;
	i = 0;
	while (i < size)
		len += ft_strlen(strs[i++]);
	len += ft_strlen(sep) * (size - 1);
	p = (char *)malloc(len + 1);
	ft_allocat(size, strs, sep, p);
	if (!p)
	{
		p = NULL;
		return (NULL);
	}
	return (p);
}
