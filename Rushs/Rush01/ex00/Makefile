# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: lsigayre <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/07/13 07:34:45 by lsigayre     #+#   ##    ##    #+#        #
#    Updated: 2019/07/13 11:31:24 by lsigayre    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = rush-01
FLAG = -Wall -Wextra -Werror
OPTION = -c
SRC = *.c
OBJ = *.o

all: $(NAME)

$(NAME):
	cc $(FLAG) $(OPTION) $(SRC)
	cc $(FLAG) -o $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean:
	/bin/rm -f $(NAME)

re: fclean all
