/*
** tests-my_fact_it.c for  in /home/Tamsi/CPool_Day05/tests
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Sat Oct  8 21:16:50 2016 Tamsi Besson
** Last update Sat Oct  8 21:27:53 2016 Tamsi Besson
*/
#include <stdio.h>

int	main()
{
  int a, b, c, d;
  a = my_fact_it(0);
  b = my_fact_it(1);
  c = my_fact_it(5);
  d = my_fact_it(-3);
  printf("%i %i %i %i", a, b , c , d);
  return (0);
}
