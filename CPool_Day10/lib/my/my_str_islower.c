/*
** my_str_islower.c for  in /home/Tamsi/CPool_Day06
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Tue Oct 11 17:12:40 2016 Tamsi Besson
** Last update Tue Oct 11 21:40:28 2016 Tamsi Besson
*/

int     my_str_islower(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < 'a' || str[i] > 'z')
        {
          return (0);
        }
      i = i + 1;
    }
  return (1);
}
