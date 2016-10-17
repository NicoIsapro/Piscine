/*
** my_aff_params.c for  in /home/Tamsi/CPool_Day07
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Wed Oct 12 11:31:42 2016 Tamsi Besson
** Last update Wed Oct 12 22:09:15 2016 Tamsi Besson
*/

int	main(int argc, char **argv)
{
  int	i;

  i = 0;
  while (i < argc)
    {
      my_putstr(argv[i]);
      my_putchar('\n');
      i = i + 1;
    }
}
