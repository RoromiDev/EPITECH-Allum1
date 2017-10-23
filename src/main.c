/*
** main.c for CPE_2015_Allum1 in /home/romain/CPE/CPE_2015_Allum1/src
**
** Made by Romain
** Login   <romain@epitech.net>
**
** Started on  Tue Feb 09 15:56:22 2016 Romain
** Last update Fri Feb 19 19:40:07 2016 Deguerville Romain
*/

#include <stdio.h>
#include "struct.h"
#include "my.h"

int	main()
{
  t_allum allum;

  init(&allum);
  my_aff(&allum);
  while (allum.nbr_allum[0] + allum.nbr_allum[1] + allum.nbr_allum[2] +
	 allum.nbr_allum[3] != 0)
    {
      allum.player += 1;
      if (player1(&allum) == 0)
	return (0);
      my_aff(&allum);
      if (allum.nbr_allum[0] + allum.nbr_allum[1] + allum.nbr_allum[2] +
	 allum.nbr_allum[3] != 0)
	{
	  computer(&allum);
	  my_aff(&allum);
	  allum.player += 1;
	}
    }
  if (allum.player % 2 == 0)
    my_putstr("I lost.. snif.. but I’ll get you next time!!\n");
  else
    my_putstr("You lost, too bad..\n");
  return (0);
}
