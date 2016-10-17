/*
** tests-my_swap.c for  in /home/Tamsi/CPool_Day04/tests
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Thu Oct  6 17:05:59 2016 Tamsi Besson
** Last update Fri Oct  7 15:46:46 2016 Tamsi Besson
*/

int	main()
{
  int	a;
  int	b;
  int	c;
  int	d;

  a = 3;
  b = -3;
  c = 1000000001;
  d = -1000000000;
   
  my_swap(&a, &b); 
  my_swap(&b, &b);
  my_swap(&c, &d);
  
}
