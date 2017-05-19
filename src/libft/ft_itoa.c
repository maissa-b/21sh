/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissa-b <maissa-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 03:07:06 by maissa-b          #+#    #+#             */
/*   Updated: 2017/05/03 20:43:12 by maissa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_nbr(int n, char *s, int len)
{
	if (n < 0)
	{
		*s = '-';
		n *= -1;
	}
	if (n > 9)
		ft_nbr(n / 10, s, len - 1);
	*(s + len) = n % 10 + '0';
}

static char	*exeption(void)
{
	char	*new;

	new = (char *)malloc(sizeof(char) * 12);
	if (!new)
		return (NULL);
	ft_nbr(-214748364, new, 9);
	new[10] = '8';
	new[11] = '\0';
	return (new);
}

char		*ft_itoa(int n)
{
	int		tmp;
	int		len;
	char	*new;

	tmp = n;
	len = 0;
	if (n == -2147483648)
		return (exeption());
	if (n < 0)
	{
		len++;
		tmp *= -1;
	}
	while (tmp > 9)
	{
		tmp /= 10;
		len++;
	}
	new = (char *)malloc(sizeof(char) * len + 2);
	if (!new)
		return (NULL);
	ft_nbr(n, new, len);
	new[len + 1] = '\0';
	return (new);
}
