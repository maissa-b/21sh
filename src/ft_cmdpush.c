/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmdpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissa-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 18:07:27 by maissa-b          #+#    #+#             */
/*   Updated: 2017/05/03 20:37:46 by maissa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_21sh.h"

void	ft_cmdpush(t_cmd **begin, t_cmd *new)
{
	t_cmd	*elem;

	elem = *begin;
	if (elem == NULL)
		return ;
	while (elem->next)
		elem = elem->next;
	elem->next = new;
	new->prev = elem;
}
