/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:34:51 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/06 15:48:48 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <math.h>
# include <fcntl.h>
# include <string.h>

# include "libft/include/ft_printf.h"
# include "libft/include/get_next_line_bonus.h"
# include "libft/include/libft.h"

# include "objects.h"

void	parse(int fd);

typedef enum e_types
{
	ERR=-1,
	AMB,
	CAM,
	LIG,
	SPH,
	PLA,
	CYL
}	t_types;

// TODO temp, remove & implement
int		ft_haschar(char *str, char c);

#endif