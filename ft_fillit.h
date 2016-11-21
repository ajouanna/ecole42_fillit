/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <ajouanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 12:03:12 by ajouanna          #+#    #+#             */
/*   Updated: 2016/11/21 15:37:39 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FILLIT_H
# define FT_FILLIT_H

typedef struct	s_tetri
{
	int tab[4][4];
}				t_tetri;

int		check_format(t_tetri *tab);
int		lecture_fichier(char *filename, t_tetri *tab);
char	*ft_realloc_str(char *old, int increase);
char	**ft_realloc_strtab(char **old, char *str);
char	*ft_get_line(int fd);
void	display_tetri(t_tetri *tetri);

#endif
