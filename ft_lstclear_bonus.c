/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:54:37 by vimirand          #+#    #+#             */
/*   Updated: 2025/10/21 13:58:47 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp_list;
	t_list	*temp2_list;

	temp_list = *lst;
	if (!*lst || !del)
		return ;
	while (temp_list != NULL)
	{
		temp2_list = temp_list;
		temp_list = temp_list->next;
		ft_lstdelone(temp2_list, del);
	}
	*lst = NULL;
}
