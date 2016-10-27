/*
** my_str_isnum.c for  in /home/Tamsi/CPool_Day06
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Tue Oct 11 15:52:26 2016 Tamsi Besson
** Last update Tue Oct 11 15:53:34 2016 Tamsi Besson
*/

int     my_str_isnum(char *str)
{
  while (*str)
    {
      if (!(*str >= 48 && *str < 58))
        return (0);
      str = str + 1;
    }
  return (1);
}
