/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 19:35:50 by yourLogin         #+#    #+#             */
/*   Updated: 2023/12/12 20:07:18 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;

	i = 0;
	while (i <= size - 1)
	{
		j = i + 1;
		while (j <= size - 1)
		{
			if (tab[j] < tab[i])
			{
				swap = tab[j];
				tab[j] = tab[i];
				tab[i] = swap;
				j = i + 1;
			}
			j++;
		}
		i++;
	}
}
