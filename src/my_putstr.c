/*
** my_putstr.c for CPE_2015_Allum1 in /home/romain/CPE/CPE_2015_Allum1/src
**
** Made by Romain
** Login   <romain@epitech.net>
**
** Started on  Tue Feb 09 16:10:31 2016 Romain
** Last update Tue Feb 09 16:12:38 2016 Romain
*/

#include "my.h"

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}
