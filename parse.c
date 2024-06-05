/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:38:33 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/05 23:30:49 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"

void	parse_line(char *line)
{
	printf("%s", line);
}

void	parse(int fd)
{
	char		*line;
	t_object	*objs;

	line = get_next_line(fd);
	while (line != NULL || ft_haschar(line, '\n'))
	{
		parse_line(line);
		free(line);
		line = get_next_line(fd);
	}
}
