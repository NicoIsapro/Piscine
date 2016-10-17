/*
** my.h for  in /home/Tamsi/CPool_Day09/include
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Fri Oct 14 10:20:48 2016 Tamsi Besson
** Last update Sun Oct 16 20:34:56 2016 Tamsi Besson
*/
#ifndef MY_H_
#define MY_H_

int	my_getnbr_base(char *, char *);
void	my_putchar(char);
int	my_isneg(int);
int	my_put_nbr(int);
int	my_swap(int *, int *);
int	my_putstr(char *);
int	my_strlen(char *);
int	my_getnbr(char *);
void	my_sort_int_tab(int *, int);
int	my_power_rec(int, int);
int	my_square_root(int);
int	my_is_prime(int);
int	my_find_prime_sup(int);
char	*my_strcpy(char *, char *);
char	*my_strncpy(char *, char *, int);
char	*my_revstr(char *);
char	*my_strstr(char *, char *);
int	my_strcmp(char *, char *);
int	my_strncmp(char *, char *, int);
char	*my_strupcase(char *);
char	*my_strlowcase(char *);
char	*my_strcapitalize(char *);
int	my_str_isalpha(char *);
int	my_str_isnum(char *);
int	my_str_islower(char *);
int	my_str_isupper(char *);
int	my_str_isprintable(char *);
void	my_showstr(char *);
void	my_showmem(char *, int);
char	*my_strcat(char *, char *);
char	*my_strncat(char *, char *, int);
int	my_show_wordtab(char **);
char	**my_str_to_wordtab(char *);

#endif // MY_H_
