/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alloc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <ajouanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 12:11:40 by ajouanna          #+#    #+#             */
/*   Updated: 2016/11/18 14:01:02 by ajouanna         ###   ########.fr       */
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
*/

char				**ft_realloc_strtab(char **old, char *str)
{
	char			**new;
	int				i;

	i = 0;
	while (old[i])
		i++;
	if ((new = malloc(sizeof(char*) * (i +  1 + 1))) == NULL)
		return (NULL);
	i = 0;
	while (old[i])
	{
		new[i] = old[i];
		i++;
	}
	free(old);
	new[i] = str;
	new[i + 1] = NULL;
	return (new);
}
