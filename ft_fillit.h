/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <ajouanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 12:03:12 by ajouanna          #+#    #+#             */
/*   Updated: 2016/11/18 15:24:37 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FILLIT_H
# define FT_FILLIT_H

typedef struct	s_tetra
{
	char tab[4][5];
}				t_tetra;

int		check_format(t_tetra *tab);
int		lecture_fichier(char *filename, t_tetra *tab);
char	*ft_realloc_str(char *old, int increase);
char	**ft_realloc_strtab(char **old, char *str);
char	*ft_get_line(int fd);
void	display_tetra(t_tetra *tetra);

#endif
