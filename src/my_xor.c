/*
** my_xor.c for my_xor in /home/romain/CPE/CPE_2015_Allum1/src
**
** Made by deguer_r
** Login   <-romain.deguerville@epitech.eu>
**
** Started on  Wed Feb 10 16:20:21 2016
** Last update Fri Feb 19 19:08:58 2016 Deguerville Romain
*/

#include <stdio.h>
#include "struct.h"
#include "my.h"

int	my_final(t_allum *allum)
{
  int	i;
  int	count;

  i = 0;
  count = 0;
  while (i < 4)
    {
      if (allum->nbr_allum[i] > 1)
	count = count + 1;
      i = i + 1;
    }
  if (count == 1)
    return (1);
  if (count == 0)
    return (2);
  else
    return (0);
}

int	my_xor(t_allum *allum)
{
  int	i;
  int	*nbr1;
  int	*nbr2;
  int	*nbr3;
  int	*nbr4;
  int	res[8];
  int	count;

  count = 0;
  i = 7;
  nbr1 = my_putbinary(allum->nbr_allum[0]);
  nbr2 = my_putbinary(allum->nbr_allum[1]);
  nbr3 = my_putbinary(allum->nbr_allum[2]);
  nbr4 = my_putbinary(allum->nbr_allum[3]);
  while (i != 0)
    {
      res[i] = (nbr1[i] + nbr2[i] + nbr3[i] + nbr4[i]) % 2;
      if (res[i] == 1)
	count = count + 1;
      i = i - 1;
    }
  if (count == 0)
    return (0);
  else
    return (1);
}
