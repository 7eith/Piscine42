/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_comb2.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amonteli <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/04 19:35:24 by amonteli     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/05 12:09:28 by amonteli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

void	print_int(int i)
{
	print_char(48 + i);
}

void	pretty_print(int left, int right)
{
	print_int(left / 10);
	print_int(left % 10);
	print_char(' ');
	print_int(right / 10);
	print_int(right % 10);
	if (left != 98)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int first;
	int last;

	first = 0;
	last = 1;
	while (first < 99)
	{
		while (last < 100)
		{
			pretty_print(first, last);
			last++;
		}
		first++;
		last = first + 1;
	}
}
