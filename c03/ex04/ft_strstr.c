/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amonteli <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/11 14:35:30 by amonteli     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/15 10:23:22 by amonteli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	restart(int *counter, int *find, int target)
{
	*find = 0;
	*counter = target;
}

char	*ft_strstr(char *str, char *to_find)
{
	int		count;
	int		f;
	int		t;

	count = 0;
	f = 0;
	if (to_find[count] == '\0')
		return (str);
	while (str[count] != '\0')
	{
		t = count;
		while (str[count] == to_find[f] && to_find[f] != '\0')
		{
			f++;
			count++;
		}
		if (to_find[f] == '\0')
			return (&str[t]);
		else
			restart(&count, &f, t);
		count++;
	}
	return (0);
}
