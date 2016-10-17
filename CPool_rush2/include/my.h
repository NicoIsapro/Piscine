/*
** my.h for my.h in /home/Bernard/Piscine/CPool_Day09
** 
** Made by Erwan Bernard
** Login   <Bernard@epitech.net>
** 
** Started on  Thu Oct 13 12:57:25 2016 Erwan Bernard
** Last update Sat Oct 15 18:47:08 2016 Erwan Bernard
*/

#ifndef MY_H
#define MY_H


#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int	my_chk_cd(char*, int);
int	my_error(char*, int);
char	my_modif_nbr(char);
int	my_flg(char*);
int	my_ft(int, int, int, char*);
void	 my_putchar(char c);
int	 my_isneg(int nb);
int	 my_putnbr(int nb);
int	 my_swap(int * a, int *b);
int	 my_putstr(char  *str);
int	 my_strlen(char *str);
int	 my_getnbr(char *str);
void	 my_sort_int_tab(int *tab, int size);
int	 my_power_rec(int nb , int power);
int	 my_square_root(int nb);
int	 my_is_prime(int nombre);
int	 my_find_prime_sup(int nb);
char	 *my_strcpy(char *dest, char *src);
char	 *my_strncpy(char *dest, char *src, int n);
char	 *my_revstr(char *str);
char	 *my_strstr(char *str, char *to_find);
int	 my_strcmp(char *s1, char* s2);
int	 my_strncmp(char *s1, char *s2, int n);
char	 *my_strupcase(char *str);
char	 *my_strlowcase(char *str);
char	 *my_strcapitalize(char *str);
int	 my_str_isalpha(char *str);
int	 my_str_isnum(char *str);
int	 my_str_islower(char *str);
int	 my_str_isupper(char *str);
int	 my_str_isprintable(char *str);
int	 my_showstr(char *str);
int	my_showmem(char *str, int size);
char	*my_strcat(char *dest ,char *src);
char	*my_strncat(char *dest, char *src, int nb);

#endif
