/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <ajouanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 11:29:12 by ajouanna          #+#    #+#             */
/*   Updated: 2016/11/18 15:44:50 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_fillit.h"

/*
** analyse le tableau et cherche la solution au Tetriminos
** 1/ convertir chaque tetraminos en un tetraminos le plus le haut et à gauche 
** possible, converti en lettres (le premier est compose de A, le 2d de B etc.)
** 2/ comme pour la resolution du sudoku, je calcule recursivement
** toutes les positions possibles et j'attribue une note au tableau obtenu. Je 
** ne garde que celui qui a la meilleure note (cad qui correspond au plus petit
** carre=> comment definir ca ?????)
** 3/ j'affiche le meilleur resultat sur stdout 
*/

int	ft_fillit(t_tetra *tab)
{
	(void)tab;
	return (1);
}

/*
** lecture du nom de fichier et enchainement des traitements
*/

int	main(int argc, char **argv)
{
	t_tetra *tab;

	if (argc != 2)
	{
		ft_putstr_fd("Usage: ", 2);
		ft_putstr_fd(argv[0], 2);
		ft_putstr_fd(" file\n", 2);
		return (0);
	}
	if ((tab = (t_tetra *)malloc(sizeof(t_tetra))) == NULL)
	{
		ft_putstr_fd("malloc failed", 2);
		return (0);
	}
	if (!lecture_fichier(argv[1], tab))
	{
		free(tab);
		ft_putstr_fd("error", 2);
		return (0);
	}
	if (!ft_fillit(tab))
	{
		free(tab);
		ft_putstr_fd("error", 2);
		return (0);
	}
	return (1);
}
