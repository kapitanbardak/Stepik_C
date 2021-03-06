/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_main.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gilevro <alexeyrusskikh@protonmail.c       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 22:00:47 by gilevro           #+#    #+#             */
/*   Updated: 2021/12/28 01:20:45 by gilevro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LINKED_LIST_MAIN_H
# define LINKED_LIST_MAIN_H

# include <stdio.h>
# include <inttypes.h>
# include <stdlib.h>
# include "linked_list_struct.h"
# include "linked_list_info.h"
# include "maybe_int_struct.h"

struct s_maybe_int64	list_at(const struct s_list *list, size_t idx)
{
	size_t	position;

	position = 0;
	if (list != NULL && idx i >= 0)
	{
		while (position != idx && list->next != NULL)
		{
			position++;
			list = list->next;
		}
		if (position == idx)
			return (some_int64(list->value));
		else
			return (g_none_int64);
	}
	else
	{
		return (g_none_int64);
	}
}

struct s_list	*list_reverse(const struct s_list *list)
{
	struct s_list	*backward;

	if (list != NULL)
	{
		backward = NULL;
		while (list->next != NULL)
		{
			list_add_front(&backward, list->value);
			list = list->next;
		}
		list_add_front(&backward, list->value);
		return (backward);
	}
	else
		return (NULL);
}

struct s_maybe_int64	maybe_read_int64(void)
{
	int64_t	num;

	if (scanf("%" SCNd64, &num) == 1)
	{
		return (some_int64(num));
	}
	else
		return (g_none_int64);
}

struct s_list	*list_read(void)
{
	struct s_maybe_int64	input;
	struct s_list			*list;
	struct s_list			*start;
	struct s_list			*node;

	list = NULL;
	start = NULL;
	input = maybe_read_int64 ();
	while (input.valid)
	{
		node = node_create(input.value);
		if (list == NULL)
		{
			list = node;
			start = node;
		}
		else
		{
			list->next = node;
			list = list->next;
		}
		input = maybe_read_int64();
	}
	return (start);
}
#endif
