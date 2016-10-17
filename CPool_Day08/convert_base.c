/*
** convert_base.c for  in /home/Tamsi/CPool_Day08/task05
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Thu Oct 13 22:01:53 2016 Tamsi Besson
** Last update Fri Oct 14 00:20:30 2016 Tamsi Besson
*/

char	*from_dec(int nbr, char *base_to)
{
  int	base;
  int	i;
  char	*result;

  i = 0;
  base = my_strlen(base_to);
  result = malloc(10000);
  while (nbr != 0)
    {
      if ((nbr % base) < 10)
	{
	  result[i] = (nbr % base) + 48;
	}
      else
	{
	  result[i] = (nbr % base) + 55;
	}
      i = i + 1;
      nbr = nbr / base;
    }
  my_revstr(result);
  return (result);
}

char	*convert_base(char *nbr, char *base_from, char *base_to)
{
  int	power;
  int	nb;
  int	i;
  int	total;
  int	base;
  char	*result;

  nb = 0;
  total = 0;
  i = my_strlen(nbr) - 1;
  power = 1;
  base = my_strlen(base_from);
  while (i >= 0)
    {
      if (nbr[i] < 58  && nbr[i] > 47)
	{
	  nb = nbr[i] - 48;
	}
      else
	{
	  nb = nbr[i] - 55;
	}
      nb = nb * power;
      total = total + nb;
      i = i - 1;
      power = power * base;
    }
  result = from_dec(total, base_to);
  return (result);
}
