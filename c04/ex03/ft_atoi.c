/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amonteli <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/11 19:04:36 by amonteli     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/12 10:11:53 by amonteli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		count;
	int		negative;
	int		number;

	count = 0;
	negative = 0;
	number = 0;
	while ((str[count] > 8 && str[count] < 14) || (str[count] == 32))
		count++;
	while ((str[count] != '\0') && (str[count] == '+' || str[count] == '-'))
	{
		if (str[count] == '-')
			negative++;
		count++;
	}
	while ((str[count] != '\0') && (str[count] >= 48 && str[count] <= 57))
	{
		number = number * 10 + str[count] - 48;
		count++;
	}
	if (negative % 2 != 0)
		return (number * -1);
	return (number);
}
