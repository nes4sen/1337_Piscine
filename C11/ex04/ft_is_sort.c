/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duskblade <duskblade@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 18:37:51 by duskblade         #+#    #+#             */
/*   Updated: 2024/04/07 14:20:52 by duskblade        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
int	f(int a, int b)
{
	if (a > b)
		return (0);
	return (-1);
}*/
int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int i;
	int swap;

	swap = 0;
	i = 0;
	while (i < length)
	{
		if ((f(tab[i], tab[i + 1])) >= 0)
			return (0);
		i++;
	}
	return (1);
}/*
int main()
{
	int arr[] = {1,2,4,4,5,6};
	int len = 6;
	int res = ft_is_sort(arr, len, f);
	printf("%d", res);
}*/