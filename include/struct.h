/*
** stuct.h for struct in /home/deguer_r/CPE_2015_Pushswap/lib/my
**
** Made by Romain Deguerville
** Login   <deguer_r@epitech.net>
**
** Started on  Mon Nov 16 19:13:02 2015 Romain Deguerville
** Last update Fri Feb 19 23:46:48 2016 Romain Deguerville
*/

#ifndef MY_STRUCT_
# define MY_STRUCT_

typedef struct	s_allum
{
  int	*nbr_allum;
  int	player;
  int	line;
  int	matches;
  char	plateau[4][8];
}		t_allum;

#endif /* !MY_STRUCT_ */
