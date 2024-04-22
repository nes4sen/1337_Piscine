/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 16:50:37 by yourLogin         #+#    #+#             */
/*   Updated: 2024/04/13 11:10:53 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strl(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return (count);
}

int	ft_error_check(char *str)
{
	int	len;
	int	i;

	len = ft_strl(str);
	if (len <= 1)
		return (1);
	while (*str)
	{
		if (*str == 32 || (*str >= 9 && *str <= 13)
			|| *str == '+' || *str == '-')
			return (1);
		i = 1;
		while (*(str + i))
		{
			if (*str == *(str + i))
				return (1);
			i++;
		}
		str++;
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;
	int		len;
	int		error_check;

	error_check = ft_error_check(base);
	len = ft_strl(base);
	nb = nbr;
	if (error_check == 1)
		return ;
	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	if (nb < len)
		ft_putchar(base[nb]);
	if (nb >= len)
	{
		ft_putnbr_base(nb / len, base);
		ft_putnbr_base(nb % len, base);
	}
}
