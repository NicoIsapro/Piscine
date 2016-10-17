/*
** my_str_isprintable.c for  in /home/Tamsi/CPool_Day06
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Tue Oct 11 23:24:24 2016 Tamsi Besson
** Last update Tue Oct 11 23:27:44 2016 Tamsi Besson
*/

int     my_isprintable(char c)
{
  return (c >= ' ' && c <= '~');
}

int     my_str_isprintable(char *str)
{
  while (*str)
    {
      if (!my_isprintable(*str))
        {
          return (0);
        }
      str++;
    }
  return (1);
}
