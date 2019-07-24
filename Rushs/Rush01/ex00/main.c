/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lsigayre <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/13 08:15:02 by lsigayre     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/13 14:56:01 by lsigayre    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putstr(char *str);
void	*ft_rush(int *n);
int		ft_atoi(char *str);

int		main(int argc, char **argv)
{
	int i;
	int j;
	int str[17];

	i = 0;
	j = 0;
	*str = 0;
	while (argv[1][i])
	{
		str[j] = argv[1][i];
		i++;
		i++;
		j++;
	}
	if (argc == 0)
		ft_putstr("To few arguments.\n");
	ft_rush(str);
	return (0);
}
