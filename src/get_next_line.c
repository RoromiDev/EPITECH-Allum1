/*
** get_next_line.c for get_next_line in /home/deguer_r/CPE/CPE_2015_getnextline
**
** Made by Romain Deguerville
** Login   <deguer_r@epitech.net>
**
** Started on  Mon Jan  4 09:23:03 2016 Romain Deguerville
** Last update Sun Feb 21 22:13:50 2016 Romain Deguerville
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "get_next_line.h"

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i = i + 1;
  return (i);
}

char	*my_str1_to_str2(char *str2, char *str1, int nbr)
{
  int	i;

  i = 0;
  while (str1[i] != '\0' && i < nbr)
    {
      str2[i] = str1[i];
      i = i + 1;
    }
  if (nbr < i)
    str2[i] = '\0';
  return (str2);
}

char	*my_return_line(char *line, int linelen, char *buff, int *test)
{
  char	*str;
  int	 len;

  if (line != NULL)
    len = my_strlen(line);
  else
    len = 0;
  str = malloc(sizeof(*str) * (len + linelen + 1));
  if (line != NULL)
    my_str1_to_str2(str, line, len);
  else
    my_str1_to_str2(str, "", len);
  str[len + linelen] = '\0';
  my_str1_to_str2(str + len, buff + *test, linelen);
  if (line != NULL)
    free(line);
  *test = *test + (linelen + 1);
  return (str);
}

char            *get_next_line(const int fd)
{
  static int	save = 0;
  static int	test = 0;
  char		buff[READ_SIZE];
  char		*str;
  int		len;

  str = 0;
  len = 0;
  while (1)
    {
      if (save <= test)
        {
          test = 0;
          if ((save = read(fd, buff, READ_SIZE)) == 0)
            return (str);
          else if (save == -1)
            return (NULL);
          len = 0;
        }
      if (buff[test + len] == '\n')
	return(str = my_return_line(str, len, buff, &test));
      if (test + len == save - 1)
        str = my_return_line(str, len + 1, buff, &test);
      len = len + 1;
    }
}
