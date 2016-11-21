/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <ajouanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 12:08:44 by ajouanna          #+#    #+#             */
/*   Updated: 2016/11/21 16:04:56 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "libft.h"
#include "ft_fillit.h"

/*
** 
*/

void display_tetri(t_tetri *tetri)
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putnbr(tetri->tab[i][j]);
			ft_putchar(' ');
			j++;
		}
		ft_putstr("\n");
		i++;
	}
}

/*
** Read character by character from fd until next line
** Remove the \n at the end of the line
** Return the read string with \0 at the end
*/

char				*ft_get_line(int fd)
{
	char			buffer[1];
	char			*str;
	int				i;

	i = 0;
	if ((str = malloc(sizeof(char))) == NULL)
		return (NULL);
	str[0] = 0;
	while (read(fd, buffer, 1) && buffer[0] != '\n')
	{
		if ((str = ft_realloc_str(str, 1)) == NULL)
			return (NULL);
		str[i++] = buffer[0];
		str[i] = 0;
	}
	if (str[0] == 0)
	{
		free(str);
		return (NULL);
	}
	return (str);
}


/*
** on verifie aue le format du tetriminos est correct
*/

int     check_format(t_tetri *tab)
{
	(void)tab;
	return (0);
}

/*
** lecture du fichier et remplissage du tableau
*/

int	lecture_fichier(char *filename, t_tetri *tab)
{
	int fd;
	char *line;
	char **strtab;

	if ((fd = open(filename, O_RDONLY)) == -1)
	{
		ft_putstr_fd("Error opening file.\n", 2);
		return (0);
	}
	strtab = NULL;
	while ((line = ft_get_line(fd)))
	{
		if ((strtab = ft_realloc_strtab(strtab, line)) == NULL)
		{
			ft_putstr_fd("malloc error\n", 2);
			return (0);
		}
	}
	if ((close(fd)) == -1)
	{
			ft_putstr_fd("close error\n", 2);
	}
	return (check_format(tab));
}
