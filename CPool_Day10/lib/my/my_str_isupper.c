/*
** my_str_isupper.c for  in /home/Tamsi/CPool_Day06
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Tue Oct 11 17:58:33 2016 Tamsi Besson
** Last update Tue Oct 11 19:11:50 2016 Tamsi Besson
*/

int     my_str_isupper(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < 'A' || str[i] > 'Z')
        {
          return (0);
        }
      i = i + 1;
    }
  return (1);
}
