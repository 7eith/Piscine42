/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcapitalize.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amonteli <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/09 17:41:02 by amonteli     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/10 15:56:54 by amonteli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_refactor_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && (str[i] >= 97 && str[i] <= 122))
			str[i] = str[i] - 32;
		if (str[i] >= 97 && str[i] <= 122)
		{
			if ((str[i - 1] < 65 && str[i - 1] > 57) || str[i - 1] < 48
					|| (str[i - 1] > 90 && str[i - 1] < 97) || str[i - 1] > 122)
				str[i] = str[i] - 32;
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] = str[i] + 32;
		i++;
	}
	ft_refactor_alpha(str);
	return (str);
}
