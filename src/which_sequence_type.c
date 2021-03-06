/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   which_sequence_type.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissa-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 18:04:32 by maissa-b          #+#    #+#             */
/*   Updated: 2017/05/03 20:37:48 by maissa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_21sh.h"

int			is_number(char *s, int len)
{
	int		i;

	i = 0;
	if (s[0] == '+' || s[0] == '-')
		i += 1;
	while (i < len)
	{
		if (s[i] > '9' || s[i] < '0')
			return (FALSE);
		i++;
	}
	return (TRUE);
}
