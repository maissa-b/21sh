/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissa-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 18:13:39 by maissa-b          #+#    #+#             */
/*   Updated: 2017/05/03 20:43:12 by maissa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_tabdel(char **tab)
{
	int		i;

	i = -1;
	while (tab[++i])
	{
		ft_strdel(&tab[i]);
	}
	free(tab);
	tab = NULL;
}

void		ft_tabdel_and_init(char ***tab)
{
	int		i;

	i = -1;
	if (*tab)
	{
		while (tab[0][++i])
		{
			ft_strdel(&tab[0][i]);
		}
		free(*tab);
	}
	*tab = NULL;
}
