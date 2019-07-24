/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_comb.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amonteli <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/04 11:45:29 by amonteli     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/04 19:22:25 by amonteli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	print(char a, char b, char c)
{
	if (a != b && b != c && c != a)
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		if (a != 55)
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = 48;
	b = 49;
	c = 50;
	while (a <= 55)
	{
		while (b <= 56)
		{
			while (c <= 57)
			{
				print(a, b, c);
				c++;
			}
			c = b + 1;
			b++;
		}
		b = a + 1;
		a++;
	}
}

