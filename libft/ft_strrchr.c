/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snedir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 18:00:23 by snedir            #+#    #+#             */
/*   Updated: 2016/11/12 18:44:35 by snedir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	l;
	int		r;

	l = (char)c;
	r = 0;
	while (*s)
	{
		s++;
		r++;
	}
	while (*s != l && r > 0)
	{
		s--;
		r--;
	}
	if (*s == l)
		return (char*)(s);
	return (NULL);
}
