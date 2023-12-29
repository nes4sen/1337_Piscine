/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 16:49:54 by yourLogin         #+#    #+#             */
/*   Updated: 2023/12/25 19:26:25 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (!*to_find)
		return (str);
	while (*str)
	{
		if (*to_find == *str)
		{
			while (*(to_find + i) == *(str + i))
			{
				i++;
				if (*(to_find + i) == '\0')
					return (str);
			}
			i = 0;
		}
		str++;
	}
	return (NULL);
}
