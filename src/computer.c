/*
** computer.c for computer in /home/romain/CPE/CPE_2015_Allum1/src
**
** Made by
** Login   <-n@epitech.net>
**
** Started on  Wed Feb 10 19:01:21 2016
** Last update Fri Feb 19 19:28:29 2016 Deguerville Romain
*/

#include <stdio.h>
#include "my.h"
#include "struct.h"

void	apply_xor(t_allum *allum, int *nbr, int i, int count)
{
  while (my_xor(allum) != 0)
    {
      if (allum->nbr_allum[i] > 0)
        {
          allum->nbr_allum[i] -= 1;
          count = count + 1;
        }
      else
        {
          count = 0;
          allum->nbr_allum[i] = nbr[i];
          i = i + 1;
        }
    }
  allum->line = i + 1;
  allum->matches = count;
}

void	apply_impair(t_allum *allum, int i, int count)
{
  while (i < 4)
    {
      if (allum->nbr_allum[i] == 1)
	count = count + 1;
      i = i + 1;
    }
  i = 0;
  if (count % 2 == 0)
    {
      while (allum->nbr_allum[i] <= 1)
	i = i + 1;
      allum->line = i + 1;
      allum->matches = allum->nbr_allum[i] - 1;
      allum->nbr_allum[i] = 1;
    }
  else
    {
      while (allum->nbr_allum[i] <= 1)
	i = i + 1;
      allum->line = i + 1;
      allum->matches = allum->nbr_allum[i];
      allum->nbr_allum[i] = 0;
    }
}

void	apply_win(t_allum *allum, int i)
{
  while (allum->nbr_allum[i] != 1)
    i = i + 1;
  allum->line = i + 1;
  allum->matches = 1;
  allum->nbr_allum[i] = 0;
}

void    computer_ia(t_allum *allum)
{
  int	nbr[4];

  nbr[0] = allum->nbr_allum[0];
  nbr[1] = allum->nbr_allum[1];
  nbr[2] = allum->nbr_allum[2];
  nbr[3] = allum->nbr_allum[3];
  if (my_final(allum) == 0)
    apply_xor(allum, nbr, 0, 0);
  else if (my_final(allum) == 1)
    apply_impair(allum, 0, 0);
  else
    apply_win(allum, 0);
}

void	computer(t_allum *allum)
{
  my_putchar('\n');
  my_putstr("AI'S turn:\n");
  computer_ia(allum);
  my_putstr("AI removed ");
  my_put_nbr(allum->matches);
  my_putstr(" match(es) from line ");
  my_put_nbr(allum->line);
  my_putchar('\n');
  remove_allum(allum);
}
