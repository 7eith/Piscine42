/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcat.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amonteli <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/10 19:59:39 by amonteli     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/10 21:08:23 by amonteli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		count;
	int		di;

	count = 0;
	di = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	while (src[di] != '\0')
	{
		dest[count] = src[di];
		count++;
		di++;
	}
	dest[count] = '\0';
	return (dest);
}
