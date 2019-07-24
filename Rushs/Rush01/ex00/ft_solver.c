/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_solver.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lsigayre <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/13 17:27:47 by lsigayre     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/13 17:51:18 by lsigayre    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_solver(int *up, int *down, int *left, int *right)
{
	int result[5][5];
	int i;
	int j;

	**result = 0;
	i = 0;
	j = 0;
	while (i < 4)
	{
		if (up[i] = 4)
		{
			result[i][0] = 1;
			result[i][1] = 2;
			result[i][2] = 3;
			result[i][3] = 4;
		}
		else if (down[i] = 4)
		{
			result[i][3] = 1;
			result[i][2] = 2;
			result[i][1] = 3;
			result[i][0] = 4;
		}
		if (up[i] = 1)
			result[i][0] = 4;
		if (down[i] = 1)
			result[i][3] = 4;
		if (left[i] = 1)
			result[0][i] = 4;
		if (right[i] = 1)
			result[3][i] = 4;
		if (left[i] = 4)
		{
			result[0][i] = 1;
			result[1][i] = 2;
			result[2][i] = 3;
			result[3][i] = 4;
		}
		if (result[i] = 4)
		{
			result[3][i] = 1;
			result[2][i] = 2;
			result[1][i] = 3;
			result[0][i] = 4;
		}
		i++;
	}

