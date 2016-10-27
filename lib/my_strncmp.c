/*
** my_strncmp.c for  in /home/Tamsi/CPool_Day06
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Mon Oct 10 09:50:06 2016 Tamsi Besson
** Last update Mon Oct 17 23:26:50 2016 Tamsi Besson
*/

int     my_strncmp(char *str_left, char *str_right, int count)
{
  while (*str_left && count > 0)
    {
      if (*str_left < *str_right)
        return (-1);
      else if (*str_left > *str_right)
        return (1);
      str_left++;
      str_right++;
      count--;
    }
  if (count == 0 || (*str_left == '\0' && *str_right == '\0'))
    return (0);
  else
    return (-1);
}
