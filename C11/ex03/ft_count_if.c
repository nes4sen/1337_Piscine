/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duskblade <duskblade@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:29:23 by duskblade         #+#    #+#             */
/*   Updated: 2024/04/06 18:32:22 by duskblade        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
int	f(char *str)
{
	if (*str == 'a')
		return (1);
	return (0);
}
*/
int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i]))
			count++;
		i++;
	}
	return (count);
}
/*
int main()
{
	char *arr[] = {"h","a","t","l","a"};
	int count = ft_count_if(arr, 5, f);
	printf("%d\n",count);
}
*/