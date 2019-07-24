/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   print_tab.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amonteli <amonteli@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/23 14:27:42 by alidy        #+#   ##    ##    #+#       */
/*   Updated: 2019/07/24 23:35:05 by amonteli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"

void	print_tab(char *buf, int info[6], char charact[4])
{
	int i;
	int x;
	int y;

	i = 0;
	x = 0;
	y = 0;
	while (buf[i] != '\n')
		i++;
	i++;
	while (buf[i] != '\0')
	{
		if (x >= info[2] && x <= info[4] && y >= info[3] && y <= info[5])
			write(1, &charact[2], 1);
		else
			write(1, &buf[i], 1);
		if (buf[i] == '\n')
		{
			x = -1;
			y++;
		}
		x++;
		i++;
	}
}
