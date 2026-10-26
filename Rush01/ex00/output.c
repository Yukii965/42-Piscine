/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrakoto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 15:36:58 by nrakoto           #+#    #+#             */
/*   Updated: 2026/10/17 15:37:00 by nrakoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush01.h"

void print_grid(int grid[SIZE][SIZE])
{
    int lig;
    int col;
    char c;

    lig = 0;
    while (lig < SIZE)
    {
        col = 0;
        while (col < SIZE)
        {
            c = grid[lig][col] + '0';
            write(1, &c, 1);
            if (col < SIZE - 1)
                write(1, " ", 1);
            col++;
        }
        write(1, "\n", 1);
        lig++;
    }
}

void print_error(void)
{
    write(1, "Error\n", 6);
}
