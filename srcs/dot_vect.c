/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dot_vect.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrosset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/16 13:40:24 by agrosset          #+#    #+#             */
/*   Updated: 2016/08/08 13:53:28 by agrosset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"

double		dot_vect(t_mtx *vect1, t_mtx *vect2)
{
	return (vect1->mtx[0] * vect2->mtx[0] + vect1->mtx[1] * vect2->mtx[1]
		+ vect1->mtx[2] * vect2->mtx[2]);
}
