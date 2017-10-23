  /*
** my_put_nbr.c for Piscine_C_J03 in /home/deguer_r/Desktop
** 
** Made by Romain Deguerville
** Login   <deguer_r@epitech.net>
** 
** Started on  Wed Sep 30 16:08:05 2015 Romain Deguerville
** Last update Mon Feb  8 22:27:13 2016 Romain Deguerville
*/

#include "my.h"

void	big_number()
{
  my_putchar('-');
  my_putchar('2');
  my_putchar('1');
  my_putchar('4');
  my_putchar('7');
  my_putchar('4');
  my_putchar('8');
  my_putchar('3');
  my_putchar('6');
  my_putchar('4');
  my_putchar('8');
}

int	my_put_nbr(int nb)
{
  if (nb == -2147483648)
    big_number();
  else
    {
      if (nb < 0)
	{
	  my_putchar('-');
	  nb = nb * (-1);
	}
      if (nb >= 0 && nb <= 9)
	my_putchar(nb + 48);
      else
	{
	  my_put_nbr(nb / 10);
	  my_put_nbr(nb % 10);
	}
    }
  return (0);
}
