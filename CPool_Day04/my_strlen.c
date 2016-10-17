/*
** my_strlen.c for  in /home/Tamsi/CPool_Day04/tests
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Thu Oct  6 15:31:32 2016 Tamsi Besson
** Last update Fri Oct  7 17:33:05 2016 Tamsi Besson
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
