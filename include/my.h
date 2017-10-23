/*
** my.h for CPE_2015_Allum1 in /home/romain/CPE/CPE_2015_Allum1/include
**
** Made by Romain
** Login   <romain@epitech.net>
**
** Started on  Tue Feb 09 16:00:00 2016 Romain
** Last update Sun Feb 21 17:52:17 2016 Romain Deguerville
*/

#ifndef MY_H_
# define MY_H_

#include "struct.h"

int	error_line(t_allum *, char *);
int	error_matches(t_allum *, char *);
void	init(t_allum *);
void	my_putstr(char *);
void	my_putchar(char);
void	my_aff(t_allum *);
int	*my_putbinary(int);
int	my_xor(t_allum *);
int	my_put_nbr(int);
int	player1(t_allum *);
int	my_getnbr(char *);
void	remove_allum(t_allum *);
void	computer(t_allum *);
int	my_final(t_allum *);
void	apply_xor(t_allum *allum, int *nbr, int i, int count);
void	apply_impair(t_allum *allum, int i, int count);
void	apply_win(t_allum *allum, int i);
void    computer_ia(t_allum *allum);
void	ini_tab(t_allum *allum);
char	*get_next_line(const int fd);

#endif /* !MY_H_ */
