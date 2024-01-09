/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 12:51:11 by yourLogin         #+#    #+#             */
/*   Updated: 2024/01/09 18:47:41 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char	*str)
{
	while (*str)
		write(1, str++, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swap(char **s1, char **s2)
{
	char	*swap;

	swap = *s1;
	*s1 = *s2;
	*s2 = swap;
}

int	main(int ac, char **av)
{
	int	i;
	int	k;

	i = 1;
	while (i < ac - 1)
	{
		k = 1;
		while (av[i + k])
		{
			if (ft_strcmp(av[i], av[i + k]) > 0)
				ft_swap(&av[i], &av[i + k]);
			k++;
		}
		i++;
	}
	i = 1;
	while (i <= ac - 1)
	{
		ft_putstr(av[i++]);
		write(1, "\n", 1);
	}
}
