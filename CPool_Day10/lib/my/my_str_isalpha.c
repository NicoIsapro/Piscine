/*
** my_str_isalpha.c for  in /home/Tamsi/CPool_Day05
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Mon Oct 10 21:32:59 2016 Tamsi Besson
** Last update Mon Oct 10 21:34:03 2016 Tamsi Besson
*/

int     my_str_isalpha(char *str)
{
  while (*str)
    {
      if (!((*str > 64 && *str < 91) || (*str > 96 && *str < 123)))
        return (0);
      ++str;
    }
  return (1);
}
