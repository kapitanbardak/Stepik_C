/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_info.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gilevro <alexeyrusskikh@protonmail.c       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 14:10:55 by gilevro           #+#    #+#             */
/*   Updated: 2021/12/26 14:34:14 by gilevro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LINKED_LIST_INFO_H
# define LINKED_LIST_INFO_H

void	list_print(const struct s_list *l)
{
	while (l)
	{
		printf("%" PRId64, l-> value);
		l = l->next;
	}
}

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

struct s_list	*list_last( const struct s_list *list )
{
	struct s_list	*last;

	if (list != NULL)
	{
		if (list->next != NULL)
		{
			last = list->next;
			while (last->next != NULL)
				last = last->next;
			return (last);
		}
		else
		{
			return ((struct s_list *)list);
		}
	}
	else
	{
		return (NULL);
	}
}

#endif
