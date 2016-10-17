/*
** sum_params.c for  in /home/Tamsi/CPool_Day08/task02
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Thu Oct 13 11:45:55 2016 Tamsi Besson
** Last update Thu Oct 13 14:01:08 2016 Tamsi Besson
*/

char	*sum_params(int argc, char **argv)
{
  int	i;
  int	totalSize;
  char	*newString;

  i = 0;
  totalSize = 0;
  while (i < argc)
    {
      totalSize = totalSize + my_strlen(argv[i]) + 1;
      i = i + 1;
    }
  newString = malloc(totalSize + 1);
  i = 0;
  while (i < argc)
    {
      newString = my_strcat(newString, argv[i]);
      newString = my_strcat(newString, "\n");
      i = i + 1;
    }
  newString = my_strcat(newString, "\0");
  return (newString);
}
