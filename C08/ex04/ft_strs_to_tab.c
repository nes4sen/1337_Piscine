/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duskblade <duskblade@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 16:03:56 by duskblade         #+#    #+#             */
/*   Updated: 2024/02/17 18:40:25 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int count;

	count = 0;
	while (*str++)
		count++;
	return (count);
}

void	ft_strcpy(char *dest, char *src)
{
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
}

char	*ft_strdup(char *src)
{
	char	*p;
	int		len;

	len = ft_strlen(src);
	p = (char *)malloc(len + 1);
	if (!p)
		return (NULL);
	ft_strcpy(p, src);
	return (p);
}

 t_stock_str *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*p;
	int	i;

	p = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		p[i].size = strlen(av[i]);
		p[i].str = av[i];
		p[i].copy = ft_strdup(av[i]);
		i++;
	}
	p[i].size = 0;
	return (p);
}
