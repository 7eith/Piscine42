/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_numbers.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amonteli <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/04 10:11:19 by amonteli     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/04 10:54:04 by amonteli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	ft_print_numbers(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		write(1, &i, 1);
		i++;
	}
}

int		main(void)
{
	ft_print_numbers();
	return (0);
}
