/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalaksya <zalaksya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 09:16:09 by zalaksya          #+#    #+#             */
/*   Updated: 2024/11/20 11:31:46 by zalaksya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next_node;
	t_list	*curent_node;

	if (!lst || !*lst || !del)
		return ;
	curent_node = *lst;
	while (curent_node)
	{
		next_node = curent_node->next;
		ft_lstdelone(curent_node, del);
		curent_node = next_node;
	}
	*lst = NULL;
}
