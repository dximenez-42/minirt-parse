/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 23:38:21 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/06 00:07:33 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

/**
 * x,y,z coordinates
*/
typedef struct s_vec3
{
	double	x;
	double	y;
	double	z;
}			t_vec3;

/**
 * r,g,b colors in range [0,255]
*/
typedef struct s_rgb
{
	uint8_t	r;
	uint8_t	g;
	uint8_t	b;
}			t_rgb;

#endif