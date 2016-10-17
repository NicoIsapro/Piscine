/*
** my_swap.c for  in /home/Tamsi/CPool_Day04/tests
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Thu Oct  6 10:30:51 2016 Tamsi Besson
** Last update Fri Oct  7 17:01:23 2016 Tamsi Besson
*/

int     my_swap(int *a, int *b)
{
  int   n;

  n = *a;
  *a = *b;
  *b = n;
  return (0);
}
