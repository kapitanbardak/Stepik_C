/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_main.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gilevro <alexeyrusskikh@protonmail.c       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 22:00:47 by gilevro           #+#    #+#             */
/*   Updated: 2021/12/27 22:02:13 by gilevro          ###   ########.fr       */
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
#endif
