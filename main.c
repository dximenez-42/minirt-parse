/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:35:41 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/05 23:31:02 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"

int	main(void)
{
	int		fd;

	fd = open("scene1.rt", O_RDONLY);
	// fd = open("scene2.rt", O_RDONLY);
	parse(fd);
}
