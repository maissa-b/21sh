/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissa-b <maissa-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 18:21:02 by maissa-b          #+#    #+#             */
/*   Updated: 2017/05/03 20:43:12 by maissa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	if (s2[i] == '\0')
		return ((char *)s1);
	while (s1[i])
	{
		j = 0;
		if (s1[i] == s2[j])
		{
			k = i;
			while (s1[k] && s2[j] && s1[k] == s2[j])
			{
				j++;
				k++;
			}
			if (s2[j] == '\0')
				return ((char *)s1 + (k - j));
		}
		i++;
	}
	return (NULL);
}
