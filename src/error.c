/*
** error.c for CPE_2015_Allum1 in /home/romain/CPE/CPE_2015_Allum1/src
**
** Made by Romain
** Login   <romain@epitech.net>
**
** Started on  Tue Feb 09 15:29:42 2016 Romain
** Last update Sun Feb 21 22:16:22 2016 Romain Deguerville
*/

#include <unistd.h>
#include "struct.h"
#include "my.h"

int	error_line(t_allum *allum, char *buff)
{
  if (buff[0] == '\0')
    {
      my_putstr("Error: invalid input (positive number expected)\n");
      return (0);
    }
  else if (allum->line > 4 || allum->line == 0)
    {
      my_putstr("Error: this line is out of range\n");
      return (0);
    }
  else if (allum->line < 0)
    {
      my_putstr("Error: invalid input (positive number expected)\n");
      return (0);
    }
  else if (allum->nbr_allum[allum->line - 1] == 0)
    {
      my_putstr("Error: this line is empty\n");
      return (0);
    }
  return (1);
}

int	error_matches(t_allum *allum, char *buff)
{
  if (buff[0] == '\0')
    {
      my_putstr("Error: invalid input (positive number expected)\n");
      return (0);
    }
  else if (allum->matches < 0)
    {
      my_putstr("Error: invalid input (positive number expected)\n");
      return (0);
    }
  else if (allum->matches == 0)
    {
      my_putstr("Error: you have to remove at least one match\n");
      return (0);
    }
  else if (allum->matches > allum->nbr_allum[allum->line - 1])
    {
      my_putstr("Error: not enough matches on this line\n");
      return (0);
    }
  return (1);
}
