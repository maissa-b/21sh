/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissa-b <maissa-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 09:31:18 by maissa-b          #+#    #+#             */
/*   Updated: 2017/05/03 20:43:12 by maissa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ref;
	t_list	*tmp1;
	t_list	*tmp2;

	if (!lst || !f)
		return (NULL);
	if (!(ref = ft_lstnew(lst->content, lst->content_size)))
		return (NULL);
	ref = (*f)(ref);
	tmp1 = ref;
	lst = lst->next;
	while (lst)
	{
		if (!(tmp2 = ft_lstnew(lst->content, lst->content_size)))
			return (NULL);
		tmp2 = (*f)(tmp2);
		tmp1->next = tmp2;
		tmp1 = tmp1->next;
		lst = lst->next;
	}
	return (ref);
}
