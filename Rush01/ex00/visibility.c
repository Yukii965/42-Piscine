/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visibility.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrakoto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 15:37:16 by nrakoto           #+#    #+#             */
/*   Updated: 2026/10/17 15:37:17 by nrakoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int count_visible(int line[SIZE], int reverse)
{
    int i;
    int index;
    int max_height;
    int count;

    i = 0;
    max_height = 0;
    count = 0;
    while (i < SIZE)
    {
        if (reverse)
            index = SIZE - 1 - i;
        else
            index = i;
        if (line[index] > max_height)
        {
            max_height = line[index];
            count++;
        }
        i++;
    }
    return (count);
}

int check_completed_lig(int grid[SIZE][SIZE], int lig,
    int clues[CLUE_COUNT])
{
    int line[SIZE];
    int col;

    col = 0;
    while (col < SIZE)
    {
        line[col] = grid[lig][col];
        col++;
    }
    if (count_visible(line, 0) != clues[8 + lig])
        return (0);
    if (count_visible(line, 1) != clues[12 + lig])
        return (0);
    return (1);
}

int check_solution(int grid[SIZE][SIZE], int clues[CLUE_COUNT])
{
    int line[SIZE];
    int i;
    int j;

    i = 0;
    while (i < SIZE)
    {
        j = 0;
        while (j < SIZE)
        {
            line[j] = grid[j][i];
            j++;
        }
        if (count_visible(line, 0) != clues[i])
            return (0);
        if (count_visible(line, 1) != clues[4 + i])
            return (0);
        i++;
    }
    i = 0;
    while (i < SIZE)
    {
        if (!check_completed_lig(grid, i, clues))
            return (0);
        i++;
    }
    return (1);
}
