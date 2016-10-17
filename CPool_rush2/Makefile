##
## Makefile for makefile in /home/Bernard/Piscine/CPool_Day10
## 
## Made by Erwan Bernard
## Login   <Bernard@epitech.net>
## 
## Started on  Fri Oct 14 15:43:56 2016 Erwan Bernard
## Last update Sat Oct 15 20:42:54 2016 Erwan Bernard
##

NAME		= rush2

SRCS		= main.c \
		code.c
BIN		= main.o \
		code.o

BIBL		= lib/my/libmy.a

RM		= rm -rf

CC		= gcc

FLGS		= -c

FLGS2		= -o

$(NAME) : all

all:
	$(CC) $(FLGS) $(SRCS)
	$(CC) $(FLGS2) $(NAME) $(BIN) $(BIBL)

clean:
	$(RM) $(BIN)

fclean: clean
	$(RM) $(NAME)

re : fclean all
