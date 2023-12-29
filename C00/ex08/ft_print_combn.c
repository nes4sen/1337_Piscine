/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:49:51 by yourLogin         #+#    #+#             */
/*   Updated: 2023/12/07 17:41:46 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_combn_start(int start, int n)
{
	while (start <= n)
		ft_putchar(start++ + '0');
	return start;
}
int	ft_combn_end(int end, int n)
{
	while (end >= (n - ))
}
void	ft_print_combn(int n)
{

	start = 0;
	end = 
	while (start <= n)
		ft_putchar(start++ + '0');
	while
}
int	main()
{
	ft_print_combn(5);
}
