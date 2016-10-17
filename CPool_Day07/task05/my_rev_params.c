/*
** my_rev_params.c for  in /home/Tamsi/CPool_Day07/task05
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Wed Oct 12 19:11:54 2016 Tamsi Besson
** Last update Wed Oct 12 22:17:01 2016 Tamsi Besson
*/

int	main(int argc, char **argv)
{
  while (argc-- > 0)
    {
      my_putstr(argv[argc]);
      my_putchar('\n');
    }
  return (1);
}
