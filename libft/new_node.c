/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snedir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 15:03:03 by snedir            #+#    #+#             */
/*   Updated: 2017/02/14 15:05:02 by snedir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_link *new_node(char *data)
{
	t_link *elem;

	elem = NULL;
	if (!(elem = (t_link*)malloc(sizeof(t_link))))
		return (0);
	elem->data = data;
	elem->next = NULL;
	elem->prev = NULL;

	return (elem);
}
