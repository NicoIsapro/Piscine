/*
** convert_base.c for  in /home/Tamsi/CPool_Day08/task05
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Thu Oct 13 22:01:53 2016 Tamsi Besson
** Last update Mon Oct 17 23:31:07 2016 Tamsi Besson
*/

char    *my_getnbr_base(char *nbr, char *base_from)
{
  int   power;
  int   i;
  int   neg;
  int   j;
  int   total;
  int   base;

  neg = 1;
  i = my_strlen(nbr) - 1;
  power = 1;
  base = my_strlen(base_from);
  while (nbr[j] && nbr[j] == '-')
    {
      neg = -1;
      j++;
    }
  total = get_total(nbr, base, i, power);
  return (total * neg);
}

int     get_total(char *nbr, int base, int i, int power)
{
  int   total;
  int   nb;

  nb = 0;
  total = 0;
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
      if (nb > base)
        return (0);
      nb = nb * power;
      total = total + nb;
      i = i - 1;
      power = power * base;
    }
  return (total);
}
