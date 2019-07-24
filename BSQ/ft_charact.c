/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_charact.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amonteli <amonteli@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/24 11:41:31 by alidy        #+#   ##    ##    #+#       */
/*   Updated: 2019/07/24 23:35:16 by amonteli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"

void	ft_charact(char *buf, char charact[3])
{
	int		count;
	int		index;

	count = 0;
	index = 0;
	while (buf[count] >= '0' && buf[count] <= '9')
		count++;
	while (index < 3)
	{
		charact[index] = buf[count];
		index++;
		count++;
	}
}
