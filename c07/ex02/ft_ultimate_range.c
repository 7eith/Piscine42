/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ultimate_range.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amonteli <amonteli@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/21 17:57:17 by amonteli     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/21 17:57:59 by amonteli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_ultimate_range(int **range, int min, int max)
{
	int		count;
	int		*tab;

	count = 0;
	if (min >= max)
		return (0);
	if (!(tab = (int *)malloc((max - min) * sizeof(int))))
		return (0);
	while (count < max - min)
	{
		tab[count] = min + count;
		count++;
	}
	return (tab);
}
