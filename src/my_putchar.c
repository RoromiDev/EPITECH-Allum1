/*
** my_putchar.c for CPE_2015_Allum1 in /home/romain/CPE/CPE_2015_Allum1/src
**
** Made by Romain
** Login   <romain@epitech.net>
**
** Started on  Tue Feb 09 16:10:05 2016 Romain
** Last update Tue Feb 09 16:28:47 2016 Romain
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
