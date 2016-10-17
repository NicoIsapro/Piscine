/*
** my_strcmp.c for  in /home/Tamsi/CPool_Day06
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Mon Oct 10 13:33:32 2016 Tamsi Besson
** Last update Tue Oct 11 23:06:19 2016 Tamsi Besson
*/



int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while(s1[i] == s2[i] && s1[i] && s2[i])
    {
      i = i + 1;
    }
  if(s1[i] == '\0' && s2[i] == '\0')
    {
      return (0);
    }
  else
    {
      return (s1[i] - s2[i]);
    }
}
