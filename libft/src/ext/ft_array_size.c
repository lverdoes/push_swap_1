/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_array_size.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lverdoes <lverdoes@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/09 20:35:41 by lverdoes      #+#    #+#                 */
/*   Updated: 2021/03/03 23:00:46 by lverdoes      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_array_size(char **array)
{
	size_t	i;

	if (!array)
		return (0);
	i = 0;
	while (array[i] != NULL)
		i++;
	return (i);
}
