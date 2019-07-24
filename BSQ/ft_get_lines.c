/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_get_lines.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amonteli <amonteli@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/24 19:58:31 by alidy        #+#   ##    ##    #+#       */
/*   Updated: 2019/07/24 23:35:10 by amonteli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"

int		ft_get_lines(char *buf)
{
	int res;
	int i;
	int temp;

	res = 0;
	i = 0;
	while (buf[i] != '\n')
		i++;
	i = i - 3;
	temp = i;
	i = 0;
	while (i < temp)
	{
		res = res * 10 + (buf[i] - 48);
		i++;
	}
	return (res);
}
