/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrakoto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 15:36:50 by nrakoto           #+#    #+#             */
/*   Updated: 2026/10/17 15:36:54 by nrakoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int main(int argc, char **argv)
{
    int grid[SIZE][SIZE] = {{0}};
    int clues[CLUE_COUNT];
    int i;
    int j;

    if (argc != 2 || !parse_clues(argv[1], clues))
    {
        print_error();
        return (1);
    }
    i = 0;
    while (i < SIZE)
    {
        j = 0;
        while (j < SIZE)
        {
            grid[i][j] = 0;
            j++;
        }
        i++;
    }
    if (solve(grid, clues, 0))
        print_grid(grid);
    else
        print_error();
    return (0);
}
