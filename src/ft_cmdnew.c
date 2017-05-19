/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmdnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissa-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 18:07:29 by maissa-b          #+#    #+#             */
/*   Updated: 2017/05/03 20:37:46 by maissa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_21sh.h"

t_cmd	*ft_cmdnew(int token, char *cmd)
{
	t_cmd	*elem;

	if (!(elem = ft_memalloc(sizeof(t_cmd))))
		return (NULL);
	if (cmd == NULL)
	{
		elem->token = token;
		elem->s = NULL;
	}
	else
	{
		elem->s = cmd;
		elem->token = token;
	}
	elem->next = NULL;
	elem->prev = NULL;
	return (elem);
}
