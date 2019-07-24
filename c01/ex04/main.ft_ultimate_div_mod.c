/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ultimate_div_mod.c                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amonteli <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/07 11:05:26 by amonteli     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/07 13:27:22 by amonteli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;	
}

int	main(void)
{
	int *a;
	int *b;

	int v1 = 10;
	int v2 = 3;

	a = &v1;
	b = &v2;
	ft_ultimate_div_mod(a, b);
	printf("%d %d", *a, *b);
	return (0);
}
