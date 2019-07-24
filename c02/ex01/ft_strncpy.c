/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amonteli <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/08 15:47:32 by amonteli     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/10 18:07:42 by amonteli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (src[count] != '\0' && n > 0)
	{
		dest[count] = src[count];
		count++;
		n--;
	}
	while (n > 0)
	{
		dest[count] = '\0';
		count++;
		n--;
	}
	return (dest);
}
