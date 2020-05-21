/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 16:16:38 by bshanae           #+#    #+#             */
/*   Updated: 2019/12/18 17:29:06 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_LIST2_H
# define LIBFT_LIST2_H

# include "libft_bool.h"
# include "libft_error.h"
# include "libft_standart.h"
# include "libft_ft_printf.h"

typedef	void			(*t_list2_f_print)(VOID_REF, VOID_REF);

typedef struct			s_list2_node
{
	void				*data;
	struct s_list2_node	*next;
	struct s_list2_node	*previous;
}						t_list2_node;

typedef struct			s_list2
{
	t_bool				is_valid;
	t_error_config		error_config;
	t_list2_node		*begin;
	t_list2_node		*end;
	size_t				element_size;
}						t_list2;

t_list2_node			*list2_node_new(VOID_REF data, size_t data_size);
void					list2_node_delete(t_list2_node *node);

void					list2_node_connect(
	t_list2_node *left, t_list2_node *right);

t_list2					list2_create(size_t element_size);
void					list2_destroy(t_list2 *list);

t_list2_node			*list2_push(t_list2 *list, VOID_REF data);
void					list2_pop(t_list2 *list);

t_list2_node			*list2_insert(
	t_list2 *list, t_list2_node *parent, VOID_REF data);
void					list2_remove(t_list2 *list, t_list2_node *target);

void					list2_clear(t_list2 *list);
void					list2_print(
	t_list2 *list, t_list2_f_print print, VOID_REF ptr);

#endif
