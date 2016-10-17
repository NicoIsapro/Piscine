/*
** my_strlen.c for  in /home/Tamsi/CPool_Day06
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Tue Oct 11 09:23:38 2016 Tamsi Besson
** Last update Tue Oct 11 21:41:49 2016 Tamsi Besson
*/

int	my_strlen(char *str)
{
  int	length;

  length = 0;
  while (str[length] != '\0')
    {
      length = length + 1;
    }
  return (length);
}
