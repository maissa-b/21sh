/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   return_errors.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissa-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 18:05:10 by maissa-b          #+#    #+#             */
/*   Updated: 2017/05/03 20:37:48 by maissa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_21sh.h"

int		return_new_prompt(int ret)
{
	if (ret == ERR_EXIT)
		return (ret);
	else if (ret == ERR_NEW_PROMPT)
	{
		set_prompt(PROMPT2, ft_strlen(PROMPT2));
		return (ERR_NEW_PROMPT);
	}
	return (ret);
}

int		free_rg_and_return(char **rg, int ret)
{
	if (rg && rg[0])
	{
		ft_bzero(*rg, ft_strlen(*rg));
		ft_strdel(rg);
	}
	return (ret);
}
