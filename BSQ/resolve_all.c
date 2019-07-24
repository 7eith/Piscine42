/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   resolve_all.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amonteli <amonteli@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/23 13:13:18 by alidy        #+#   ##    ##    #+#       */
/*   Updated: 2019/07/24 23:27:49 by amonteli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"

void	resolve_all(int cnt, char **argv)
{
	char	*buf;
	int		**tab;
	char	charact[4];
	int		info[6];

	buf = open_map(cnt, argv);
	info[0] = ft_get_lines(buf);
	if (info[0] <= 0)
	{
		write(1, "map error\n", 10);
		exit(0);
	}
	info[1] = ft_lines_length(buf);
	ft_get_char(buf, charact);
	if (info[1] > 0 && ft_get_char(buf, charact) != 0
			&& ft_check_map(buf, info, charact) != 0)
	{
		tab = init_tab_int(info[0], info[1]);
		complete_map(buf, tab, info, charact);
		free(tab);
	}
	else
		write(1, "map error\n", 10);
	free(buf);
}
