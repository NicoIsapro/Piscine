/*
** my_strdup.c for  in /home/Tamsi/CPool_Day08/task01
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Thu Oct 13 09:59:36 2016 Tamsi Besson
** Last update Thu Oct 13 21:56:25 2016 Tamsi Besson
*/

char	*my_strdup(char *str)
{
  int	length;
  char	*newString;
  
  length = my_strlen(str) + 1;
  newString = malloc(length);
  newString = my_strcpy(newString, str);
  return (newString);
}


