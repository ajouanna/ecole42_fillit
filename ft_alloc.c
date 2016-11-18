/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alloc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <ajouanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 12:11:40 by ajouanna          #+#    #+#             */
/*   Updated: 2016/11/18 15:39:02 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"
#include <stdlib.h>

/*
 ** Reallocate a char* with *increase* more bytes
*/

char				*ft_realloc_str(char *old, int increase)
{
	char			*new;
	int				i;

	i = 0;
	while (old[i])
		i++;
	if ((new = malloc(sizeof(char) * (i + increase + 1))) == NULL)
		return (NULL);
	i = -1;
	while (old[++i])
		new[i] = old[i];
	free(old);
	return (new);
}

/*
** realloue un tableau de char * termine par NULL et ajoute str a la fin
** NB : le cas ou old est NULL est pris en compte
*/

char				**ft_realloc_strtab(char **old, char *str)
{
	char			**new;
	int				i;
	int 			size_tab;

	size_tab = 0;
	if (old)
	{
		while (old[size_tab])
			size_tab++;
	}

	if ((new = malloc(sizeof(char*) * (size_tab +  1 + 1))) == NULL)
		return (NULL);
	i = 0;
	while (i < size_tab)
	{
		new[i] = old[i];
		i++;
	}
	free(old);
	new[i] = str;
	new[i + 1] = NULL;
	return (new);
}
