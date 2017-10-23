/*
** player1.c for player1 in /home/romain/CPE/CPE_2015_Allum1/src
**
** Made by
** Login   <-n@epitech.net>
**
** Started on  Wed Feb 10 16:55:12 2016
** Last update Fri Feb 26 00:33:01 2016 Romain Deguerville
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "my.h"
#include "struct.h"

int	player_line(t_allum *allum)
{
  char	*buff;

  my_putstr("Line: ");
  buff = get_next_line(0);
  if (buff == NULL)
    return (0);
  if (buff[0] != '\0')
    allum->line = my_getnbr(buff);
  while (error_line(allum, buff) == 0)
    {
      my_putstr("Line: ");
      buff = get_next_line(0);
      if (buff == NULL)
	return (0);
      if (buff[0] != '\0')
	allum->line = my_getnbr(buff);
    }
  return (1);
}

int	player_matches(t_allum *allum)
{
  char	*buff;

  my_putstr("Matches: ");
  buff = get_next_line(0);
  if (buff == NULL)
    return (0);
  if (buff[0] != '\0')
    allum->matches = my_getnbr(buff);
  if (error_matches(allum, buff) == 0)
    return (2);
  return (1);
}

int	player1(t_allum *allum)
{
  int	test;

  test = 0;
  my_putchar('\n');
  my_putstr("Your turn:\n");
  while (test == 0 || test == 2)
    {
      if (player_line(allum) == 0)
	return (0);
      test = player_matches(allum);
      if (test == 0)
	return (0);
      if (test == 1)
	test = 1;
    }
  my_putstr("Player removed ");
  my_put_nbr(allum->matches);
  my_putstr(" match(es) from line ");
  my_put_nbr(allum->line);
  my_putchar('\n');
  allum->nbr_allum[allum->line - 1] -= allum->matches;
  remove_allum(allum);
  return (1);
}
