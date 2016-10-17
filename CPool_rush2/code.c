/*
** code.c for rush2 in /home/Tamsi/CPool_rush2
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Sat Oct 15 11:04:01 2016 Tamsi Besson
** Last update Sun Oct 16 16:16:25 2016 Tamsi Besson
*/

#include "include/my.h"

int	my_error(char *str, int len)
{
  if (str == NULL)
    {
      write(2, "Missing arguments.\n", 19);
      return (84);
    }
    if (1 != my_str_isnum(str))
      {
	write(2, "Bad arguments.\n", 15);
	return (84);
      }
    return (0);
}

char	my_modif_nbr(char nb)
{
  int	res;
  int	tab[2];
  
  res = (nb - 48) * 2;  
  if (res >= 10)
    {
      tab[1] = 1;
      tab[2] = res % 10;
      res = tab[1] + tab[2];
    }
  return (res + 48);
}

int	my_chk_cd(char *str, int i)
{
  int	res;
  int	len;

  len = my_strlen(str);
  res = my_error(str, len);
  if (res == 84)
    return (84);
  res = 0;
  while (0 <= len - i)
    {
      str[len - i] = my_modif_nbr(str[len - i]);
      i += 2;
    }
  i = 0;
  while (str[i])
    {
      res = res + (str[i] - 48);
      i++;
    }
  return (res % 10);
}
