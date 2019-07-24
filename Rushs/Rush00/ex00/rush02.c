/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush02.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amonteli <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/07 12:12:05 by amonteli     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/07 12:15:26 by amonteli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_put_if(int x, int y, int l, int h)
{
	if ((l == 0 && h == 0) || (l == (x - 1) && h == 0))
		ft_putchar('A');
	else if ((l == 0 && h == (y - 1)) || (h == (y - 1) && l == (x - 1)))
		ft_putchar('C');
	else if ((h != (y - 1) && h != 0) && (l != (x - 1) && l != 0))
		ft_putchar(' ');
	else
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int l;
	int h;

	l = 0;
	h = 0;
	while (h < y && (x > 0 && y > 0))
	{
		while (l < x)
		{
			ft_put_if(x, y, l, h);
			l++;
		}
		l = 0;
		ft_putchar('\n');
		h++;
	}
}
