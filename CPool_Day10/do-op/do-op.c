/*
** do-op.c for  in /home/Tamsi/CPool_Day10/do-op
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Sun Oct 16 19:11:31 2016 Tamsi Besson
** Last update Sun Oct 16 21:46:36 2016 Tamsi Besson
*/

int	doop(char *left, char *op, char *right)
{
  int	nb_left;
  int	nb_right;
  
  nb_left = check_nbr(left);
  my_put_nbr(nb_left);
  my_putchar('\n');
  nb_right = check_nbr(right);
  my_put_nbr(nb_right);
  return (nb_left + nb_right);
}

int	check_nbr(char *str)
{
  int	i;
  int	j;
  char	*nbr;
  int	to_int;

  i = 0;
  j = 0;
  nbr = malloc(my_strlen(str));
  while (str[i] && str[i] == '-')
    {
      nbr[0] = '-';
      i++;
      j = 1;
    }
  while (str[i] && str[i] > 47 && str[i] < 58)
    {
      nbr[j] = str[i];
      i++;
      j++;
    }
  my_putstr("//////");
  my_putstr(nbr);
  to_int = my_getnbr(nbr);
  if (i == 0)
    {
      return (0);
    }
  else
    return (to_int);
}

int	check_param(int argc)
{
  if(argc == 4)
    {
      return (1);
    }
  else
    {
      return (0);
    }
}

int	main(int argc, char **argv)
{
  int	ok;

  ok = check_param(argc);
  if(ok == 1)
    {
      my_put_nbr(doop(argv[1], argv[2], argv[3]));
    }
  return (0);
}
