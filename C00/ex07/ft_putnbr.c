/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:04:04 by yourLogin         #+#    #+#             */
/*   Updated: 2023/12/09 11:40:56 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	temp;

	temp = 1;
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb == -2147483648)
	{
		write(1, "2147483648", 10);
		return ;
	}
	while ((nb / temp) >= 10)
		temp *= 10;
	while (temp > 0)
	{
		ft_putchar(nb / temp + '0');
		nb = nb % temp;
		temp = temp / 10;
	}
}
