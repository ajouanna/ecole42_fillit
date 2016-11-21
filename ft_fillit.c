/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <ajouanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 11:29:12 by ajouanna          #+#    #+#             */
/*   Updated: 2016/11/21 16:06:00 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_fillit.h"

/*
** analyse le tableau et cherche la solution au Tetriminos
** 1/ convertir chaque tetriminos en un tetriminos le plus le haut et à gauche 
** possible, converti en lettres (le premier est compose de A, le 2d de B etc.)
** 2/ comme pour la resolution du sudoku, je calcule recursivement
** toutes les positions possibles et j'attribue une note au tableau obtenu. Je 
** ne garde que celui qui a la meilleure note (cad qui correspond au plus petit
** carre=> comment definir ca ?????)
** 3/ j'affiche le meilleur resultat sur stdout 
** 4/ certaines combinaisons donnent probablement une impossibilite d'inserer
** une piece. Dans ce cas, abandonner
*/

int	ft_fillit(t_tetri *tab)
{
	(void)tab;
	return (1);
}

/*
** lecture du nom de fichier et enchainement des traitements
*/

int	main(int argc, char **argv)
{
	t_tetri *tab;

	if (argc != 2)
	{
		ft_putstr_fd("Usage: ", 2);
		ft_putstr_fd(argv[0], 2);
		ft_putstr_fd(" file\n", 2);
		return (0);
	}
	if ((tab = (t_tetri *)malloc(sizeof(t_tetri))) == NULL)
	{
		ft_putstr_fd("malloc failed", 2);
		return (0);
	}
	if (!lecture_fichier(argv[1], tab))
	{
		free(tab);
		ft_putstr_fd("error\n", 2);
		return (0);
	}
	if (!ft_fillit(tab))
	{
		free(tab);
		ft_putstr_fd("error\n", 2);
		return (0);
	}
	return (1);
}
