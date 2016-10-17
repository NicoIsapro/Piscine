/*
** my_revstr.c for  in /home/Tamsi/CPool_Day06
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Mon Oct 10 10:21:07 2016 Tamsi Besson
** Last update Tue Oct 11 19:04:50 2016 Tamsi Besson
*/

char    *my_revstr(char *str)
{
  int   i;
  int   j;
  char  letter;

  i = 0;
  j = my_strlen(str) - 1;
  while (i < j)
    {
      letter = str[i];
      str[i] = str[j];
      str[j] = letter;
      i = i + 1;
      j = j - 1;
    }
  return (str);
}
