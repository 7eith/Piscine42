/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_rush01.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lsigayre <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/13 11:25:32 by lsigayre     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/13 17:55:51 by lsigayre    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		*ft_colup(int *a);
int		*ft_coldown(int *a);
int		*ft_rowleft(int *a);
int		*ft_rowright(int *a);

void	ft_rush(int *n)
{
	int colup[5];
	int coldown[5];
	int rowleft[5];
	int rowright[5];

	*colup = 0;
	*coldown = 0;
	*rowleft = 0;
	*rowright = 0;
	*colup = *ft_colup(n);
	*coldown = *ft_coldown(n);
	*rowleft = *ft_rowleft(n);
	*rowright = *ft_rowright(n);
	ft_solver(colup, coldown, rowleft, rowright);
}
