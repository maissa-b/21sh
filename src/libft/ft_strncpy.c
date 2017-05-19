/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissa-b <maissa-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:19:25 by maissa-b          #+#    #+#             */
/*   Updated: 2017/05/03 20:43:12 by maissa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strncpy(char *dst, const char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (!dst)
		return (NULL);
	while (src[i] && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	if (i < n)
		while (i < n)
			dst[i++] = '\0';
	return (dst);
}
