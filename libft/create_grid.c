/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_grid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snedir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 15:00:07 by snedir            #+#    #+#             */
/*   Updated: 2017/02/14 15:01:31 by snedir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**create_grid(int taille)
{
	char	**grid;
	int		i;

	i = 0;
	grid = (char**)malloc(sizeof(char*) * taille + 1);
	while (i < taille)
	{
		grid[i] = (char*)malloc(sizeof(char) * taille + 1);
		i++;
	}
	grid[i] = 0;
	format_grid(grid, taille);
	return (grid);
}
