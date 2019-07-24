/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fill.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alidy <marvin@le-101.fr>                   +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/24 10:57:58 by alidy        #+#   ##    ##    #+#       */
/*   Updated: 2019/07/24 10:58:39 by alidy       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"

int		ft_compare(int a, int b, int c)
{
	int mini;

	if (a <= b)
		mini = a;
	else
		mini = b;
	if (c < mini)
		mini = c;
	return (mini);
}

void	ft_fill(int lig, int col, int **tab, int save[4])
{
	int x;
	int y;
	int save_max;

	x = 0;
	y = 0;
	save_max = 1;
	while (++x < lig)
	{
		while (++y < col)
			if (tab[x][y] != 0)
			{
				tab[x][y] = 1 + ft_compare(tab[x - 1][y],
						tab[x - 1][y - 1], tab[x][y - 1]);
				if (tab[x][y] > save_max)
				{
					save_max = tab[x][y];
					save[2] = y;
					save[3] = x;
					save[0] = y - save_max + 1;
					save[1] = x - save_max + 1;
				}
			}
		y = 0;
	}
}
