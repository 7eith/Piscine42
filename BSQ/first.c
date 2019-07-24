/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   first.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alidy <marvin@le-101.fr>                   +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/24 10:59:00 by alidy        #+#   ##    ##    #+#       */
/*   Updated: 2019/07/24 22:20:51 by alidy       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"

void	ft_col(int **tab, int lin)
{
	int i;

	i = 0;
	while (i < lin)
	{
		if (tab[i][0] != 0)
			tab[i][0] = 1;
		i++;
	}
}

void	ft_lin(int **tab, int col)
{
	int i;

	i = 0;
	while (i < col)
	{
		if (tab[0][i] != 0)
			tab[0][i] = 1;
		i++;
	}
}

void	ft_first(int **tab, int lin, int col)
{
	ft_lin(tab, col);
	ft_col(tab, lin);
}
