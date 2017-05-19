/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissa-b <maissa-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 18:31:47 by maissa-b          #+#    #+#             */
/*   Updated: 2017/05/03 20:43:12 by maissa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		white(const char *str)
{
	int			i;

	i = 0;
	if (str[i] == '\n' || str[i] == '\f' || str[i] == '\v' ||
		str[i] == '\r' || str[i] == '\t' || str[i] == ' ')
		while (str[i] == '\n' || str[i] == '\f' || str[i] == '\v' ||
				str[i] == '\r' || str[i] == '\t' || str[i] == ' ')
			i++;
	return (i);
}

int				ft_atoi(const char *str)
{
	int			nbr;
	int			i;
	int			ref;

	nbr = 0;
	ref = 0;
	i = white(str);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			ref = 1;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		nbr = (nbr * 10) + (str[i] - '0');
		i++;
	}
	if (ref != 0)
		nbr *= -1;
	return (nbr);
}
