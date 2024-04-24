/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duskblade <duskblade@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 20:49:43 by duskblade         #+#    #+#             */
/*   Updated: 2024/04/24 22:40:23 by duskblade        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
int	cmp(char *s1, char *s2)
{
	int	i;
	
	i = 0;
	while(s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
*/

void	ft_swap(char **s1, char **s2)
{
	char	*swap;
	
	swap = *s1;
	*s1 = *s2;
	*s2 = swap; 	
}

void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	int i;
	int j;
	int	def;
	
	i = 0;
	while (tab[i])
	{
		j = 1;
		while(tab[i + j])
		{
			
			if (cmp(tab[i], tab[i + j]) > 0)
				ft_swap(&tab[i], &tab[i + j]);
			j++;	
		}
		i++;
	}
}
