/*
** my_putstr.c for  in /home/Tamsi/CPool_Day04/tests
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Thu Oct  6 13:43:17 2016 Tamsi Besson
** Last update Fri Oct  7 17:27:36 2016 Tamsi Besson
*/

int     my_putstr(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (0);
}
