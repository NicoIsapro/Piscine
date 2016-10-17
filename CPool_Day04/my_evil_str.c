/*
** my_evil_str.c for  in /home/Tamsi/CPool_Day04
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Thu Oct  6 18:48:08 2016 Tamsi Besson
** Last update Sat Oct  8 21:01:53 2016 Tamsi Besson
*/

char	*my_evil_str(char *str)
{
  int	i;
  int	j;
  char lettre;
  
  i = 0;
  j = my_strlen(str) - 1;
  while (i < j)
    {
      lettre = str[i];
      str[i] = str[j];
      str[j] = lettre;
      i = i + 1;
      j = j - 1;
    }
}
