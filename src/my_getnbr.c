/*
** my_get_nbr.c for Piscine_C_J04 in /home/deguer_r/Desktop
** 
** Made by Romain Deguerville
** Login   <deguer_r@epitech.net>
** 
** Started on  Thu Oct  1 20:28:37 2015 Romain Deguerville
** Last update Wed Feb 10 18:59:10 2016 
*/

#include <stdio.h>

int	my_getneg(char *str)
{
  int	i;
  int	nbr;

  i = 0;
  nbr = 1;
  while (str[i] < '0' || str[i] > '9')
    {
      if (str[i] == '-')
	nbr = nbr * (-1);
      i = i + 1;
    }
  return (nbr);
}

int	my_getnbr(char *str)
{
  int	i;
  int	number;

  i = 0;
  number = 0;
  while (str[i] != '\0' && str[i] != '\n')
    {
      if (str[i] < '0' || str[i] > '9')
	return (-1);
      i = i + 1;
    }
  i = 0;
  while (str[i] >= '0' && str[i] <= '9')
    {
      number = ((number * 10) + (str[i] - 48));
      i = i + 1;
    }
  number = number * my_getneg(str);
  return (number);
}
