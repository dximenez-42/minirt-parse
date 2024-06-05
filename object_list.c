/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   object_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 22:18:12 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/05 22:37:12 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"

t_object	*obj_last(t_object *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	obj_add(t_object **lst, t_object *n)
{
	t_object	*aux;

	if (!n)
		return ;
	if (!*lst)
	{
		*lst = n;
		return ;
	}
	aux = obj_last(*lst);
	aux->next = n;
}

int	obj_size(t_object *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst->next)
	{
		lst = lst->next;
		i++;
	}
	if (lst->next == NULL)
		i++;
	return (i);
}

t_object	*obj_new(void *content)
{
	t_object	*element;

	element = (t_object *)malloc(sizeof(t_object));
	if (!element)
		return (NULL);
	element->data = content;
	element->next = NULL;
	return (element);
}
