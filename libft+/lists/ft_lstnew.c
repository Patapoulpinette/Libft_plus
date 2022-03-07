/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbouron <dbouron@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:23:48 by dbouron           #+#    #+#             */
/*   Updated: 2022/03/07 14:43:45 by dbouron          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../headfiles/libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*first_element;

	first_element = malloc(sizeof(t_list));
	if (!first_element)
		return (NULL);
	first_element->content = content;
	first_element->next = NULL;
	return (first_element);
}
