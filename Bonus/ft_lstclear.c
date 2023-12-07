/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sueno-te <rflseijiueno@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 07:17:09 by sueno-te          #+#    #+#             */
/*   Updated: 2023/12/07 07:17:11 by sueno-te         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Deletes and frees the given node and every successor of that node, using the
function ’del’ and free(3). Finally, the pointer to the list must be set to
NULL.*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*tmp;

	if (lst && del)
	{
		current = *lst;
		while (current != NULL)
		{
			tmp = current;
			current = current->next;
			ft_lstdelone(tmp, del);
		}
		*lst = NULL;
	}
}
