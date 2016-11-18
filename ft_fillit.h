/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <ajouanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 12:03:12 by ajouanna          #+#    #+#             */
/*   Updated: 2016/11/18 14:46:39 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FILLIT_H
# define FT_FILLIT_H

int		check_format(char **tab);
int		lecture_fichier(char *filename, char **tab);
char	*ft_realloc_str(char *old, int increase);
char	**ft_realloc_strtab(char **old, char *str);
char	*ft_get_line(int fd);

#endif
