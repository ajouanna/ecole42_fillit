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
*/

int	ft_fillit(t_tetra *tab)
{
	(void)tab;
	return (1);
}

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
		return (0);
	if (!ft_fillit(tab))
		return (0);
	return (1);
}
