/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maybe_int_struct.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gilevro <alexeyrusskikh@protonmail.c       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 20:29:27 by gilevro           #+#    #+#             */
/*   Updated: 2021/12/27 22:27:05 by gilevro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef MAYBE_INT_STRUCT_H
# define MAYBE_INT_STRUCT_H

# include <stdbool.h>

struct s_maybe_int64
{
	bool	valid;
	int64_t	value;
};

struct s_maybe_int64	some_int64( int64_t i )
{
	return ((struct s_maybe_int64){.value = i, .valid = true});
}

const struct s_maybe_int64	g_none_int64 = {0};

#endif
