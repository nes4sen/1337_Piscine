/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duskblade <duskblade@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:17:39 by duskblade         #+#    #+#             */
/*   Updated: 2024/04/21 13:28:56 by duskblade        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int main(int ac, char *av[])
{
	
	int		i;
	char	ops[5];
	int		(*ptr2funct[5])(int, int);
	int		nbr;
	
	if (ac != 4) {
        return 0;
    }
	ptr2funct[0] = ft_addition;
	ptr2funct[1] = ft_substraction;
	ptr2funct[2] = ft_multiplacation;
	ptr2funct[3] = ft_division;
	ptr2funct[4] = ft_modulo;
	ops[0] = '+';
	ops[1] = '-';
	ops[2] = '*';
	ops[3] = '/';
	ops[4] = '%';
	i = 0;
	while(i < 5)
	{
		if (*av[2] == ops[i])
		{
			 nbr = ptr2funct[i](ft_atoi(av[1]), ft_atoi(av[3]));
			 if (*av[2] == '/' && nbr == -1)
			{
				write(1, "Stop : division by zero\n", 25);
				return (0);
			}
			 if (*av[2] == '%' && nbr == -1)
			{
				write(1, "Stop : modulo by zero\n", 23);
				return (0);
			}
		}
		i++;
	}
	ft_putnbr(nbr);
	write(1, "\n", 1);
}
