/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duskblade <duskblade@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 11:26:17 by yourLogin         #+#    #+#             */
/*   Updated: 2024/03/14 18:37:15 by duskblade        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strchr(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return(str);
		str++;
	}
	if (c == '\0')
		return (str);
	return (NULL);
}

int	ft_str_count(char *str, char *charset)
{
	int		i;
	int		count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if(!ft_strchr(charset, str[i]) && (ft_strchr(charset, str[i + 1]) || str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

char	*ft_allocat_word(char *str, char *charset)
{
	int		i;
	int		j;
	int		k;
	char	*word;

	i = 0;
	j = 0;
	while (!(ft_strchr(charset, str[i + j])))
		j++;
	word = (char *)malloc(sizeof(char) * (j + 1));
	k = 0;
	while (j >= k)
		word[k++] = str[i++];
	word[k] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int 	count;
	int		i;
	char	**pp;

	count = ft_str_count(str, charset);
	if (!count)
		return (NULL);
	pp = (char **)malloc((count + 1) * sizeof(char *));
	if (!pp)
		return (NULL);
	i = 0;
	while (*str)
	{
		while(*str && ft_strchr(charset, *str))
			str++;
		if(*str && !(ft_strchr(charset, *str)))
		{
			pp[i] = ft_allocat_word(str, charset);
			i++;
			while (*str && !(ft_strchr(charset, *str)))
				str++;
		}
	}
	pp[i] = NULL;
	return (pp);
}