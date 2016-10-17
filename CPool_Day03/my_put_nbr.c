/*
** my_put_nbr.c for  in /home/Tamsi/CPool_Day03
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Thu Oct  6 12:07:02 2016 Tamsi Besson
** Last update Fri Oct  7 15:04:22 2016 Tamsi Besson
*/

int	my_put_nbr(int nb)
{
  int	temp;
  int	i;
  char	letter;
  char	number[11];

  temp = nb;
  i = 0;
  if (nb < 0)
    {
      temp = -temp;
    }
  while (temp / 10 > 0)
    {
      letter = (temp % 10) + 48;                                                                        
      number[i] = letter;
      temp = temp / 10;
      i = i + 1;
    }

  letter = (temp % 10) + 48;
  number[i] = letter;

  if (nb < 0)
    {
      my_putchar('-');
    }
  while (i >= 0)
    {
      my_putchar (number[i]);
      i = i - 1;
    }
}
