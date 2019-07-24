/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft.h                                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amonteli <amonteli@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/24 09:58:49 by alidy        #+#   ##    ##    #+#       */
/*   Updated: 2019/07/24 23:26:36 by amonteli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

void	ft_rock(char *buf, int **tab, char rock);
void	ft_first(int **tab, int lin, int col);
void	ft_fill(int lig, int col, int **tab, int save[4]);
void	print_tab(char *buf, int info[6], char charact[4]);
int		ft_check_map(char *buf, int info[6], char charact[4]);
char	*open_map(int nb, char **argv);
void	resolve_all(int cnt, char **argv);
int		**init_tab_int(int nb_lignes, int nb_char);
void	complete_map(char *buf, int **tab, int info[6], char charact[3]);
char	*open_map_stdin(void);
int		ft_get_lines(char *buf);
int		ft_lines_length(char *buf);
int		ft_get_char(char *buf, char charact[4]);

#endif
