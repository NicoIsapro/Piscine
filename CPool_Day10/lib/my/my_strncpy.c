/*
** my_strncpy.c for  in /home/Tamsi/CPool_Day06
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Mon Oct 10 09:50:06 2016 Tamsi Besson
** Last update Tue Oct 11 21:22:52 2016 Tamsi Besson
*/

char    *my_strncpy(char *dest, char *src, int n)
{
  int   i;

  i = 0;
  while (n > 0 && src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[n] = '\0';
  return (dest);
}
