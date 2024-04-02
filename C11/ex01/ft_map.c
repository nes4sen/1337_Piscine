/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duskblade <duskblade@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 14:53:34 by duskblade         #+#    #+#             */
/*   Updated: 2024/04/02 18:12:52 by duskblade        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
/*
int num(int n)
{
	return n;
}
*/
int	*ft_map(int *tab, int length, int(*f)(int))
{
	int i;
	int *arr;

	i = 0;
	arr = (int *)malloc(sizeof(int) * length);
	if (!arr)
		return NULL;
	while (i < length)
	{
		arr[i] = f(tab[i]);
		i++;
	}
	return (arr);
}
/*
int main()
{
	int tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int len = 4;
	int *res = ft_map(tab, len, &num);
	int i = 0;
	while (i < len)
	{
		printf("%d ",res[i++]);
	}	
}
*/