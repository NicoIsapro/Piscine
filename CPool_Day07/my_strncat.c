/*
** my_strncat.c for  in /home/Tamsi/CPool_Day07
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Wed Oct 12 11:20:06 2016 Tamsi Besson
** Last update Wed Oct 12 11:20:26 2016 Tamsi Besson
*/

char	*my_strncat(char *dest, char *src, int nb)
{
  int	len;
  int	i;

  len = my_strlen(dest);
  i = 0;
  while(i < nb && src[i])
    {
      dest[len + i] = src[i];
      i = i + 1;
    }
  dest[len + i] = '\0';
  return (dest);
}
