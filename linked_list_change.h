/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_change.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gilevro <alexeyrusskikh@protonmail.c       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 15:18:37 by gilevro           #+#    #+#             */
/*   Updated: 2021/12/26 16:58:34 by gilevro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LINKED_LIST_CHANGE_H
# define LINKED_LIST_CHANGE_H

# include <stdio.h>
# include <inttypes.h>
# include <stdlib.h>
# include "linked_list_struct.h"
# include "linked_list_info.h"

struct s_list	*node_create( int64_t value)
{
	struct s_list	*node;

	node = malloc(sizeof(struct s_list));
	node->value = value;
	return (node);
}

void	list_add_front( struct s_list **old, int64_t value )
{
	struct s_list	*new_list;

	new_list = node_create(value);
	new_list->next = *old;
	*old = new_list;
}

void	list_destroy( struct s_list *list )
{
	struct s_list	*temp;

	while (list)
	{
		temp = list->next;
		free(list);
		list = temp;
	}
}
/*void	list_add_back( struct s_list** old, int64_t value )
{
	
}
*/
#endif
