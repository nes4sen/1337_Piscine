/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duskblade <duskblade@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 15:55:52 by duskblade         #+#    #+#             */
/*   Updated: 2024/04/02 14:39:19 by duskblade        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

void print(int n)
{
	printf("%d ", n);
}
*/
void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int i;
	
	i = 0;
	while (i <= length)
	{
		f(tab[i]);
		i++;
	}
}
/*
int main()
{
	int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	int len;
	
	len = 5;
	ft_foreach(arr, len, &print);
}
*/