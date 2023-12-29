/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 20:55:07 by yourLogin         #+#    #+#             */
/*   Updated: 2023/12/18 18:47:18 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

char	*ft_lowcase(char *str)
{
	char	*start;

	start = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return (start);
}

char	*ft_strcapitalize(char *str)
{
	char	*start;
	bool	cap;

	start = str;
	cap = 1;
	ft_lowcase(start);
	while (*start)
	{
		if ((*start >= 'a' && *start <= 'z'))
		{
			if (cap)
				*start -= 32;
			cap = 0;
		}
		else if (*start >= '0' && *start <= '9')
			cap = 0;
		else
			cap = 1;
		start++;
	}
	return (str);
}
