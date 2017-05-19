/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmdclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissa-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 18:07:36 by maissa-b          #+#    #+#             */
/*   Updated: 2017/05/03 20:37:46 by maissa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_21sh.h"

void		ft_cmdclear(t_cmd **cmd)
{
	t_cmd	*tmp;
	t_cmd	*elem;

	if (cmd == NULL)
		return ;
	elem = (*cmd)->prev;
	tmp = (*cmd)->next;
	if (!elem)
		*cmd = (*cmd)->next;
	else
	{
		elem->next = tmp;
		tmp->prev = elem;
	}
	ft_memdel((void *)cmd);
}
