/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_grid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snedir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 15:01:51 by snedir            #+#    #+#             */
/*   Updated: 2017/02/14 15:02:32 by snedir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	format_grid(char **grid, int taille)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (grid[i])
	{
		while (j < taille)
		{
			grid[i][j] = '.';
			j++;
		}
		grid[i][j] = '\0';
		j = 0;
		i++;
	}
}
