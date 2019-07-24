/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rock.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alidy <marvin@le-101.fr>                   +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/24 11:12:51 by alidy        #+#   ##    ##    #+#       */
/*   Updated: 2019/07/24 11:27:39 by alidy       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"

void	ft_rock(char *buf, int **tab, char rock)
{
	int ligne;
	int colonne;
	int i;

	ligne = 0;
	colonne = 0;
	i = 0;
	while (buf[i] != '\n')
		i++;
	i++;
	while (buf[i])
	{
		if (buf[i] == '\n' && buf[i + 1] != '\0')
		{
			ligne++;
			colonne = -1;
		}
		else if (buf[i] == rock)
		{
			tab[ligne][colonne] = 0;
		}
		colonne++;
		i++;
	}
}
