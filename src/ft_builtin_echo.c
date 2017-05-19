/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_builtin_echo.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissa-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 18:08:17 by maissa-b          #+#    #+#             */
/*   Updated: 2017/05/03 20:37:45 by maissa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_21sh.h"

/*
**	ft_builtin_echo est la seule fonction du builtin echo, elle gere
**	les erreurs, concat les arguments qu'elle reçoit en une string épurée
**	puis l'affiche.
*/

int		ft_builtin_echo(t_core *core, char **args)
{
	char	*tmp;
	char	*output;

	(void)core;
	if (args && args[0])
	{
		if ((tmp = ft_tabconcat(args)) == NULL)
			return (ERR_EXIT);
		if ((output = ft_epurstr(tmp)) == NULL)
			return (ft_free_and_return(ERR_EXIT, tmp, NULL, NULL));
		write(1, output, ft_strlen(output));
		ft_multi_free(output, tmp, NULL, NULL);
	}
	write(1, "\n", 1);
	return (0);
}
