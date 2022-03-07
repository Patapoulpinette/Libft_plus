/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbouron <dbouron@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 17:09:11 by dbouron           #+#    #+#             */
/*   Updated: 2022/03/07 14:44:02 by dbouron          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../headfiles/libft.h"

void	*ft_calloc(size_t count, size_t type_size)
{
	void	*result;

	result = malloc(count * type_size);
	if (!result)
		return (NULL);
	ft_bzero (result, count * type_size);
	return (result);
}
