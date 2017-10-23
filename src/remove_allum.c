/*
** remove_allum.c for remove in /home/romain/CPE/CPE_2015_Allum1/src
** 
** Made by 
** Login   <-n@epitech.net>
** 
** Started on  Wed Feb 10 18:28:51 2016 
** Last update Wed Feb 10 18:40:46 2016 
*/

#include <stdio.h>
#include "struct.h"
#include "my.h"

void	remove_allum(t_allum *allum)
{
  int	i;
  int	save;

  i = 6;
  save = allum->matches;
  while (allum->plateau[allum->line - 1][i] == ' ')
    {
      i = i - 1;
    }
  while (save != 0)
    {
      allum->plateau[allum->line - 1][i] = ' ';
      save = save - 1;
      i = i - 1;
    }
}
