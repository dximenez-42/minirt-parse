/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   objects.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 22:35:11 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/06 00:18:33 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OBJECTS_H
# define OBJECTS_H

# include "parser.h"

typedef enum e_object_type
{
	AMB,
	CAM,
	LIG,
	SPH,
	PLA,
	CYL
}			t_object_type;

typedef struct s_object
{
	t_object_type	type;
	void			*data;
	struct s_object	*next;
}				t_object;

/**
 * Ambient light
 * @param ra Ratio - [0.0,1.0]
 * @param o RGB - [0,255]
 * @param fov FOV - [0,180]
*/
typedef struct s_amb
{
	double			ra;
	struct s_rgb	rgb;
}	t_amb;

/**
 * Camera
 * @param c Coordinates
 * @param o Orientation - [-1.0,1.0]
 * @param fov FOV - [0,180]
*/
typedef struct s_cam
{
	struct s_vec3	c;
	struct s_vec3	o;
	double			fov;
}	t_cam;

/**
 * Light
 * @param c Coordinates
 * @param b Brightness - [0,1.0]
 * @param rgb RGB - [0,255]
*/
typedef struct s_lig
{
	struct s_vec3	c;
	struct s_vec3	b;
	struct s_rgb	rgb;
}	t_lig;

/**
 * Sphere
 * @param c Coordinates
 * @param d Diameter
 * @param rgb RGB - [0,255]
*/
typedef struct s_sph
{
	struct s_vec3	c;
	double			d;
	struct s_rgb	rgb;
}	t_sph;

/**
 * Plane
 * @param c Coordinates
 * @param n Normal vector - [-1.0,1.0]
 * @param rgb RGB - [0,255]
*/
typedef struct s_pla
{
	struct s_vec3	c;
	struct s_vec3	n;
	struct s_rgb	rgb;
}	t_pla;

/**
 * Cylinder
 * @param c Coordinates
 * @param n Normal vector - [-1.0,1.0]
 * @param d Diameter
 * @param h Height
 * @param rgb RGB - [0,255]
*/
typedef struct s_cyl
{
	struct s_vec3	c;
	struct s_vec3	n;
	double			d;
	double			h;
	struct s_rgb	rgb;
}	t_cyl;

typedef struct s_scene
{
	struct s_object	**objs;
	struct s_amb	*amb;
	struct s_cam	*cam;
	struct s_lig	*lig;
}				t_scene;

t_object	*obj_last(t_object *lst);
void		obj_add(t_object **lst, t_object *n);
int			obj_size(t_object *lst);
t_object	*obj_new(void *content);

#endif