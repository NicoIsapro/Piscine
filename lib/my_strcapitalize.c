/*
** my_strcapitalize.c for  in /home/Tamsi/CPool_Day06
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Mon Oct 10 21:12:47 2016 Tamsi Besson
** Last update Tue Oct 11 21:38:52 2016 Tamsi Besson
*/

char    *my_strcapitalize(char *str)
{
  int   i;

  i = 1;
  if (str[0] >= 97 && str[0] <= 122)
    str[0] = str[0] - 32;
  while (str[i] != '\0')
    {
      if (str[i] <= 'Z' && str[i] >= 'A')
        str[i] = str[i] + 32;
      if (str[i - 1] >= 23 && str[i - 1] <= 47 || str[i - 1] == ';')
        {
          if (str[i] <= 'z' && str[i] >= 'a')
            str[i] = str[i] - 32;
        }
      i = i + 1;
    }
  return (str);
}
