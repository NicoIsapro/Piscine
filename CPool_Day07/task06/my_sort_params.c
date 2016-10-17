/*
** my_sort_params.c for  in /home/Tamsi/CPool_Day07/task06
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Wed Oct 12 19:15:02 2016 Tamsi Besson
** Last update Wed Oct 12 19:15:42 2016 Tamsi Besson
*/

int	my_sort_param(int argc, char **argv)
{
  int	i;
  char	*p;

  i = 0;
  while (argc - 1 > i)
    {
      if (my_strcmp(argv[i], argv[i + 1]) > 0)
	{
	  p = argv[i];
	  argv[i] = argv[i + i];
	  argv[i + 1] = p;
	  my_putstr(argv[i]);
	}
      i = i + 1;
    }
  i = 0;
  while (argc > i)
    {
      my_putstr(argv[i]);
      my_putchar('\n');
      i = i + 1;
    }
  return (0);
}
