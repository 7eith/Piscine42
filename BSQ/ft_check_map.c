/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_check_map.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amonteli <amonteli@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/24 19:56:39 by alidy        #+#   ##    ##    #+#       */
/*   Updated: 2019/07/24 23:20:35 by amonteli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"

int		inter(char *buf, int info[6], char c[4], int i)
{
	int cpt;
	int nb_n;

	cpt = 0;
	nb_n = 0;
	while (buf[i])
	{
		if (cpt == info[1])
		{
			if (buf[i] != '\n')
				return (0);
			else
			{
				cpt = -1;
				nb_n++;
			}
		}
		else if (buf[i] != c[0] && buf[i] != c[1] && buf[i] != c[2])
			return (0);
		cpt++;
		i++;
	}
	if (nb_n != info[0])
		return (0);
	return (1);
}

int		ft_check_map(char *buf, int info[6], char charact[4])
{
	int i;

	i = 0;
	while (buf[i] != '\n')
		i++;
	i++;
	if (inter(buf, info, charact, i) == 0)
		return (0);
	return (1);
}
