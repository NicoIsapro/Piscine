/*
** main.c for rush2 in /home/Tamsi/CPool_rush2
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Sat Oct 15 10:53:49 2016 Tamsi Besson
** Last update Sat Oct 15 23:50:33 2016 Tamsi Besson
*/

#include "include/my.h"

int	my_flg(char *str)
{
  int	i;
  char	*flg;

  i = 0;
  flg = "-c";
  while (str[i] == flg[i])
    {
      i++;
      if (flg[i] == 0 && str[i] == 0)
	return (1);
    }
  i = 0;
  flg = "-f";
  while (str[i] == flg[i])
    {
      i++;
      if (flg[i] == 0 && str[i] == 0)
	return (2);
    }
  return (0);
}

int	my_ft(int vrf, int i, int error, char *argv)
{
  if (vrf == 1)
    {
      i = 2;
      error = my_chk_cd(argv, i);
      if (error == 84)
	return (84);
      else if (error == 0)
	write(1, "OK\n", 3);
      else
	write(1, "KO\n", 3);
      return (0);
    }
  if (vrf == 2)
    {
      i = 1;
      error = my_chk_cd(argv, i);
      if (error == 84)
	return (84);
      else if (error != 0)
	{
	  my_putchar(10 - error + 48);
	  write(1, "\n" ,1);
	}
      if (error == 0)
	write(2, "No possibilities.\n", 18);
      return (0);
    }
}
int	main(int argc, char **argv)
{
  int	i;
  int	j;
  int	vrf;
  int	error;

  vrf = 0;
  j = 0;
  if (argc <= 2)
    {
      write(2, "Too few arguments.\n", 19);
      return (84);
    }
  while (argv[j] && vrf == 0)
    {
      vrf = my_flg(argv[j]);
      j++;
    }
  if (argv[j] == 0)
    {
      write(2, "Flag error.\n", 12);
      return (84);
    }
  error = my_ft(vrf, i, error, argv[j]);
  return (error);
}
