/*
** my_strstr.c for  in /home/Tamsi/CPool_Day06
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Mon Oct 10 11:11:23 2016 Tamsi Besson
** Last update Mon Oct 17 23:16:24 2016 Tamsi Besson
*/

char    *my_strstr(char *str, char *to_find)
{
  int   i;

  if (str[0] != '\0')
    {
      i = 0;
      while (to_find[i] != '\0')
        {
          if (to_find[i] != str[i])
            return (my_strstr(str + 1, to_find));
          i = i + 1;
        }
      return (str);
    }
  else
    {
      return ("=>NULL POINTER RETURNED<=\n");
    }
}
