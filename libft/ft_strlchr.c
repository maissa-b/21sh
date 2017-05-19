/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissa-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 18:13:53 by maissa-b          #+#    #+#             */
/*   Updated: 2017/05/03 20:43:12 by maissa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	find last occurence of c in str, if there isn't one, return str
*/

char		*ft_strlchr(char *str, char c)
{
	int		i;
	int		j;
	char	*ret;

	i = 0;
	j = 0;
	if (ft_strchr(str, c))
	{
		while (str[i] != '\0')
		{
			if (str[i] == c)
				j = i;
			i++;
		}
		ret = &str[j] + 1;
	}
	else
		return (str);
	return (ret);
}
