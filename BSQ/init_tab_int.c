/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   init_tab_int.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amonteli <amonteli@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/23 12:42:17 by alidy        #+#   ##    ##    #+#       */
/*   Updated: 2019/07/24 23:19:15 by amonteli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"

void	tab_fill(int i, int nb_lignes, int nb_char, int **tab)
{
	int j;

	j = 0;
	while (i < nb_lignes)
	{
		while (j < nb_char)
		{
			tab[i][j] = 9;
			j++;
		}
		i++;
		j = 0;
	}
}

int		**init_tab_int(int nb_lignes, int nb_char)
{
	int **tab;
	int i;

	i = 0;
	tab = malloc(sizeof(int *) * nb_lignes);
	if (tab == NULL)
		return (0);
	while (i < nb_lignes)
	{
		tab[i] = malloc(sizeof(int) * nb_char);
		if (tab == NULL)
			return (0);
		i++;
	}
	i = 0;
	tab_fill(i, nb_lignes, nb_char, tab);
	return (tab);
}
