/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gilevro <alexeyrusskikh@protonmail.c       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 18:54:40 by gilevro           #+#    #+#             */
/*   Updated: 2021/12/25 22:26:07 by gilevro          ###   ########.fr       */
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

size_t	list_length( const struct s_list *list )
{
	size_t			size;

	size = 0;
	while (list->next != NULL)
	{
		size++;
		list = list->next;
	}
	return (size);
}

int	main(void)
{
	return (0);
}
