/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   open_map.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amonteli <amonteli@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/22 15:38:55 by alidy        #+#   ##    ##    #+#       */
/*   Updated: 2019/07/24 23:35:03 by amonteli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"

char	*open_map(int nb, char **argv)
{
	int		file;
	int		size;
	char	*buf;
	char	*rd[1];

	size = 0;
	file = open(argv[nb], O_RDONLY);
	if (file == -1)
		return (0);
	while (read(file, rd, 1))
		size++;
	if (close(file) == -1)
		return (0);
	buf = malloc(sizeof(char) * size);
	if (buf == NULL)
		return (0);
	file = open(argv[nb], O_RDONLY);
	size = read(file, buf, size);
	if (close(file) == -1)
		return (0);
	return (buf);
}
