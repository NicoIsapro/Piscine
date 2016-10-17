/*
** my_strncmp.c for  in /home/Tamsi/CPool_Day06
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Mon Oct 10 09:50:06 2016 Tamsi Besson
** Last update Tue Oct 11 23:05:13 2016 Tamsi Besson
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  while (*s1 && n > 0)
    {
      if (*s1 < *s2)
	return (-1);
      else if (*s1 > *s2)
	return (1);
      s1++;
      s2++;
      n--;
    }
  if (n == 0 || (*s1 == '\0' && *s2 == '\0'))
    return (0);
  else
    return (-1);
}

