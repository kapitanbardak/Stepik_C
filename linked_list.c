/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gilevro <alexeyrusskikh@protonmail.c       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 18:54:40 by gilevro           #+#    #+#             */
/*   Updated: 2021/12/25 20:15:16 by gilevro          ###   ########.fr       */
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

int	main(void)
{
	return (0);
}
