/*
** convert_base.c for  in /home/Tamsi/CPool_Day08/task05
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Thu Oct 13 22:01:53 2016 Tamsi Besson
** Last update Sun Oct 16 20:44:32 2016 Tamsi Besson
*/

char    *my_putnbr_base(int nbr, char *base_to)
{
  int   base;
  int   i;
  char  *result;

  i = 0;
  base = my_strlen(base_to);
  result = malloc(nbr * 32);
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
