/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrakoto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 15:37:05 by nrakoto           #+#    #+#             */
/*   Updated: 2026/10/17 15:37:06 by nrakoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int parse_clues(const char *input, int clues[CLUE_COUNT])
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (input[i] != '\0')
    {
        while (input[i] == ' ' || input[i] == '\t')
            i++;
        if (input[i] == '\0')
            break ;
        if (input[i] < '1' || input[i] > '4' || count >= CLUE_COUNT)
            return (0);
        clues[count] = input[i] - '0';
        count++;
        i++;
        if (input[i] != '\0' && input[i] != ' ' && input[i] != '\t')
            return (0);
    }
    if (count != CLUE_COUNT)
        return (0);
    return (1);
}
