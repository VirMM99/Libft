/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:55:06 by vimirand          #+#    #+#             */
/*   Updated: 2025/10/21 14:10:24 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp_list;
	t_list	*new_list;
	void	*result;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		result = f(lst->content);
		temp_list = ft_lstnew(result);
		if (!temp_list)
		{
			del(result);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, temp_list);
		lst = lst->next;
	}
	return (new_list);
}
