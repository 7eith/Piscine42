/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amonteli <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/10 21:09:16 by amonteli     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/10 21:22:41 by amonteli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int		count;
	int		di;

	count = 0;
	di = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	while (src[di] != '\0' && nb > 0)
	{
		dest[count] = src[di];
		count++;
		di++;
		nb--;
	}
	dest[count] = '\0';
	return (dest);
}
