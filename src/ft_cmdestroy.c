/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmdestroy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissa-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 18:07:32 by maissa-b          #+#    #+#             */
/*   Updated: 2017/05/03 20:37:46 by maissa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_21sh.h"

void		ft_cmdestroy(t_cmd **begin)
{
	t_cmd	*tmp;
	t_cmd	*list;

	list = *begin;
	tmp = NULL;
	while (list)
	{
		if (list->next)
			tmp = list->next;
		else
			tmp = NULL;
		free(list);
		list = tmp;
	}
}
