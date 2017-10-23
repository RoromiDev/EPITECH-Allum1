/*
** get_next_line.h for h in /home/deguer_r/CPE/CPE_2015_getnextline
**
** Made by Romain Deguerville
** Login   <deguer_r@epitech.net>
**
** Started on  Mon Jan  4 09:23:21 2016 Romain Deguerville
** Last update Sun Feb 21 22:03:33 2016 Romain Deguerville
*/

#ifndef GET_NEXT_LINE_H_
# define GET_NEXT_LINE_H_

char	*get_next_line(const int fd);
int	my_strlen(char *str);
char	*my_str1_to_str2(char *dest, char *src, int n);
char	*my_return_line(char *line, int treat, char *buff, int *start);

# define READ_SIZE 4096

#endif /* !GET_NEXT_LINE_H_ */
