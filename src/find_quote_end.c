/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_quote_end.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissa-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 18:08:42 by maissa-b          #+#    #+#             */
/*   Updated: 2017/05/03 20:37:45 by maissa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_21sh.h"

int		is_end(char *s, int *i, char c)
{
	int		len;

	if (is_char(s, *i, c))
	{
		*i += 1;
		if ((len = find_next_char(s, *i, c)) < 0)
			return (FALSE);
		else
			*i += len;
	}
	return (TRUE);
}

int		is_begin(char *s, int *i, char c)
{
	int		len;

	if (is_char(s, *i, c))
	{
		*i -= 1;
		if ((len = find_prev_char(s, *i, c)) < 0)
			return (FALSE);
		else
			*i -= len;
	}
	return (TRUE);
}

int		find_quote_end(char *s)
{
	int		i;
	int		n_dquote;

	i = -1;
	n_dquote = 0;
	if (count_prev_char(s, ft_strlen(s) - 1, '\\') % 2 == 1)
		return (FALSE);
	while (++i < (int)ft_strlen(s))
	{
		if (is_end(s, &i, '\'') == FALSE)
			return (FALSE);
		else if (is_end(s, &i, '"') == FALSE)
			return (FALSE);
	}
	return (TRUE);
}
