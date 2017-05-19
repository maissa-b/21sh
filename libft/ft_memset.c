/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissa-b <maissa-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 22:42:55 by maissa-b          #+#    #+#             */
/*   Updated: 2017/05/03 20:43:12 by maissa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;

	s = (unsigned char *)b;
	if (len)
		while (len-- > 0)
			*(s++) = (unsigned char)c;
	return (b);
}
