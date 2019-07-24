/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.ft_strstr.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amonteli <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/11 16:01:18 by amonteli     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/13 20:34:41 by amonteli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

void    ft_cons(int *j, int *i, int cible)
{
	*j = 0;
	*i = cible;
}

char    *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int cible;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		cible = i;
		while (str[i] == to_find[j] && to_find[j] != '\0')
		{
			j = j + 1;
			i = i + 1;
		}
		if (to_find[j] == '\0')
			return (&str[cible]);
		else
			ft_cons(&j, &i, cible);
		i++;
	}
	return (0);
}

int main () {
	char haystack[30] = "alsP";
	char needle[10] = "als";
	char *ret;

	ret = ft_strstr(haystack, needle);

	printf("The substring is: %s\n", ret);

	return(0);
}
