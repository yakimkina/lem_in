/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <bshanae@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 21:06:57 by bshanae           #+#    #+#             */
/*   Updated: 2019/12/18 17:29:06 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_vector.h"

void						*vector_find(
	t_vector *me, t_vector_f2 cmp, VOID_REF ptr)
{
	u_long					i;

	i = 0;
	while (i < me->length)
	{
		if (!cmp(me->storage + i * me->element_size, ptr))
			return (me->storage + i * me->element_size);
		i++;
	}
	return (NULL);
}
