/*
** init.c for CPE_2015_Allum1 in /home/romain/CPE/CPE_2015_Allum1/src
**
** Made by Romain
** Login   <romain@epitech.net>
**
** Started on  Tue Feb 09 15:53:34 2016 Romain
** Last update Fri Feb 19 23:45:13 2016 Romain Deguerville
*/

#include <stdio.h>
#include <stdlib.h>
#include "struct.h"
#include "my.h"

void	ini_tab(t_allum *allum)
{
  int	i;

  i = 0;
  while (i < 7)
    {
      allum->plateau[0][i] = ' ';
      allum->plateau[1][i] = ' ';
      allum->plateau[2][i] = '|';
      allum->plateau[3][i] = '|';
      i = i + 1;
    }
  i = 2;
  allum->plateau[0][3] = '|';
  allum->plateau[2][0] = ' ';
  allum->plateau[2][6] = ' ';
  while (i < 5)
    {
      allum->plateau[1][i] = '|';
      i = i + 1;
    }
  allum->plateau[0][7] = '\0';
  allum->plateau[1][7] = '\0';
  allum->plateau[2][7] = '\0';
  allum->plateau[3][7] = '\0';
}

void	init(t_allum *allum)
{
  allum->nbr_allum = malloc(sizeof(*allum->nbr_allum) * 4);
  allum->nbr_allum[0] = 1;
  allum->nbr_allum[1] = 3;
  allum->player = 0;
  allum->nbr_allum[2] = 5;
  allum->nbr_allum[3] = 7;
  ini_tab(allum);
}
