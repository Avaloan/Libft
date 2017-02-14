/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snedir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 15:35:59 by snedir            #+#    #+#             */
/*   Updated: 2017/02/14 15:36:36 by snedir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

x_list *add_node(x_list *elem, char *data, head *master)
{
	x_list *new;

	if (elem)
	{
		new = new_node(data);
		new->next = elem;
		elem->prev = new;
		master->lenght += 1;
	}
	else
	{
		new = new_node(data);
		master->first_element = new;
		master->lenght += 1;
	}
	return (new);
}

