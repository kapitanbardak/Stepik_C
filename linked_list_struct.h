/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_struct.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gilevro <alexeyrusskikh@protonmail.c       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 16:52:47 by gilevro           #+#    #+#             */
/*   Updated: 2021/12/26 17:00:42 by gilevro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LINKED_LIST_STRUCT_H
# define LINKED_LIST_STRUCT_H

struct s_list
{
	int64_t			value;
	struct s_list	*next;
};

#endif
