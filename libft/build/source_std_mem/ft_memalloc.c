/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 17:43:58 by bshanae           #+#    #+#             */
/*   Updated: 2019/12/18 17:29:07 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_standart.h"

void	*ft_memalloc(size_t size)
{
	void	*mem;

	if (!size || !(mem = malloc(size)))
		return (NULL);
	return (ft_memset(mem, 0, size));
}
