/*
** aff.c for CPE_2015_Allum1 in /home/romain/CPE/CPE_2015_Allum1/src
**
** Made by Romain
** Login   <romain@epitech.net>
**
** Started on  Tue Feb 09 16:09:04 2016 Romain
** Last update Sat Feb 20 02:03:25 2016 Romain Deguerville
*/

#include "struct.h"
#include "my.h"

void	my_aff(t_allum *allum)
{
  int	i;

  i = 0;
  my_putstr("*********\n");
  while (i < 4)
    {
      my_putchar('*');
      my_putstr(allum->plateau[i]);
      my_putchar('*');
      my_putchar('\n');
      i = i + 1;
    }
  my_putstr("*********\n");
}
