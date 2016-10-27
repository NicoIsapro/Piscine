/*
** task2.c for  in /home/Tamsi/CPool_Day03
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Wed Oct  5 14:36:11 2016 Tamsi Besson
** Last update Thu Oct  6 09:44:54 2016 Tamsi Besson
*/

int     my_print_revalpha()
{
  char  alphabet;

  alphabet = 122;
  while (alphabet > 96)
    {
      my_putchar(alphabet);
      alphabet = alphabet - 1;
    }
}
