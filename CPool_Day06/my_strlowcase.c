/*
** my_strlowcase.c for  in /home/Tamsi/CPool_Day06
**
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Mon Oct 10 19:44:55 2016 Tamsi Besson
** Last update Tue Oct 11 21:42:51 2016 Tamsi Besson
*/

char	*my_strlowcase(char *str)
{
  char	*ret;

  ret = str;
  while (*str)
    {
      if (*str > 64 && *str < 91)
	*str += 32;
      ++str;
    }
  return (ret);
}
