/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lsigayre <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/13 13:40:50 by lsigayre     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/13 13:59:15 by lsigayre    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_isnegative(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v') ||
			(str[i] == ' ') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		while (str[j] == '-')
			j++;
		i++;
	}
	if ((i - j) % 2 == 0)
		return (0);
	else
		return (1);
}

int		ft_atoi(char *str)
{
	int i;
	int nbr;
	int negative;

	nbr = 0;
	negative = 0;
	i = 0;
	while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v') ||
			(str[i] == ' ') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	negative = ft_isnegative(str);
	while (str[i] == '+' || str[i] == '-')
		i++;
	while ((str[i]) && (str[i] >= '0') && (str[i] <= '9'))
	{
		nbr *= 10;
		nbr += (int)str[i] - '0';
		i++;
	}
	if (negative == '0')
		return (-nbr);
	else
		return (nbr);
}
