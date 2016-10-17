/*
** my_strcmp.c for  in /home/Tamsi/CPool_Day06
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Mon Oct 10 13:33:32 2016 Tamsi Besson
** Last update Mon Oct 17 23:14:06 2016 Tamsi Besson
*/



int     my_strcmp(char *str_left, char *str_right)
{
  int   i;

  i = 0;
  while (str_left[i] == str_right[i] && str_left[i] && str_right[i])
    {
      i = i + 1;
    }
  if (str_left[i] == '\0' && str_right[i] == '\0')
    {
      return (0);
    }
  else
    {
      return (str_left[i] - str_right[i]);
    }
}
