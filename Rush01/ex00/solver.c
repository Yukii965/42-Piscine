/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrakoto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 15:37:10 by nrakoto           #+#    #+#             */
/*   Updated: 2026/10/17 15:37:11 by nrakoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int is_safe(int grid[SIZE][SIZE], int lig, int col, int num)
{
    int i;

    i = 0;
    while (i < SIZE)
    {
        if (grid[lig][i] == num)
            return (0);
        if (grid[i][col] == num)
            return (0);
        i++;
    }
    return (1);
}

int solve(int grid[SIZE][SIZE], int clues[CLUE_COUNT], int pos)
{
    int lig;
    int col;
    int num;

    if (pos == SIZE * SIZE)
        return (check_solution(grid, clues));
    lig = pos / SIZE;
    col = pos % SIZE;
    num = 1;
    while (num <= SIZE)
    {
        if (is_safe(grid, lig, col, num))
        {
            grid[lig][col] = num;
            if (col != SIZE - 1 || check_completed_lig(grid, lig, clues))
            {
                if (solve(grid, clues, pos + 1))
                    return (1);
            }
            grid[lig][col] = 0;
        }
        num++;
    }
    return (0);
}
