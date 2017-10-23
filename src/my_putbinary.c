/*
** my_putbinary.c for putbinary in /home/deguer_r/PSU/PSU_2015_minitalk/src
** 
** Made by Romain Deguerville
** Login   <deguer_r@epitech.net>
** 
** Started on  Mon Feb  8 22:16:24 2016 Romain Deguerville
** Last update Wed Feb 10 16:47:34 2016 
*/

#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include "my.h"

int	*my_putbinary(int nbr)
{
  int   quotien;
  int   reste;
  int   i;
  int	*res;

  res = malloc(sizeof(*res) * 8);
  i = 8;
  while (i != 0)
    {
      quotien = nbr / 2;
      reste = nbr % 2;
      res[i - 1] = reste;      
      nbr = quotien;
      i = i - 1;
    }
  return (res);
}
