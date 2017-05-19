/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissa-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 18:13:43 by maissa-b          #+#    #+#             */
/*   Updated: 2017/05/03 20:43:12 by maissa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	unsigned int	i;
	int				len;
	char			*new;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	len = ft_strlen(s);
	while (s[len - 1] == ' ' || s[len - 1] == '\t' || s[len - 1] == '\n')
		len--;
	if (len > 0)
		new = ft_strsub(s, i, len - i);
	else
		new = ft_strdup("\0");
	return (new);
}
