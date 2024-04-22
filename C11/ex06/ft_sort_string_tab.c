/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duskblade <duskblade@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 13:58:41 by duskblade         #+#    #+#             */
/*   Updated: 2024/04/22 22:21:45 by duskblade        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ptr_swap(char **s1, char **s2)
{
	char *temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;	
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
void ft_sort_string_tab(char **tab)
{
	int	i;
	int j;
	int dif;
	

	i = 0;
	while (tab[i])
	{
		j = 1;
		while (tab[i + j])
		{
			dif = ft_strcmp(tab[i], tab[i + j]);
			if (dif > 0)
			{
				ft_ptr_swap(&tab[i], &tab[i + j]);
			}
			j++;
		}
		i++;		
	}
}