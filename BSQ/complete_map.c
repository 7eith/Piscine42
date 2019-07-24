/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   complete_map.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amonteli <amonteli@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/23 17:26:11 by amonteli     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/24 23:32:45 by amonteli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"

void	complete_map(char *buf, int **tab, int info[6], char charact[4])
{
	int		save[4];

	ft_rock(buf, tab, charact[0]);
	ft_first(tab, info[0], info[1]);
	ft_fill(info[0], info[1], tab, save);
	info[2] = save[0];
	info[3] = save[1];
	info[4] = save[2];
	info[5] = save[3];
	print_tab(buf, info, charact);
}
