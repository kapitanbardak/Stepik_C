/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gilevro <alexeyrusskikh@protonmail.c       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 18:54:40 by gilevro           #+#    #+#             */
/*   Updated: 2021/12/25 23:06:08 by gilevro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>

struct s_list
{
	int64_t			value;
	struct s_list	*next;
};

/*
void	list_print(const struct s_list *l)
{
	while (l)
	{
		printf("%" PRId64, l-> value);
		l = l->next;
	}
}

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
*/

size_t	list_length( const struct s_list *list )
{
	size_t			size;

	if (list != NULL)
	{
		size = 1;
		while (list->next != NULL)
		{
			size++;
			list = list->next;
		}
		return (size);
	}
	else
	{
		return (0);
	}
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

int	main(void)
{
	return (0);
}
