/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_get_char.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amonteli <amonteli@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/24 20:45:01 by alidy        #+#   ##    ##    #+#       */
/*   Updated: 2019/07/24 23:26:33 by amonteli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"

int		ft_size(char *buf)
{
	int size;
	int i;
	int temp;

	size = 0;
	i = 0;
	while (buf[i] != '\n')
		i++;
	i = i - 3;
	temp = i;
	i = 0;
	while (i < temp)
	{
		size++;
		i++;
	}
	return (size);
}

int		ft_get_char(char *buf, char charact[4])
{
	int i;
	int size;

	i = 0;
	size = ft_size(buf);
	while (i < size)
		i++;
	charact[1] = buf[i];
	i++;
	charact[0] = buf[i];
	i++;
	charact[2] = buf[i];
	charact[3] = '\0';
	return (1);
}
