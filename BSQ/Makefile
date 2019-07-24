# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: amonteli <amonteli@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/07/24 22:12:05 by amonteli     #+#   ##    ##    #+#        #
#    Updated: 2019/07/24 23:31:52 by amonteli    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME 	= 	bsq
CC		=	gcc
FLAG 	= 	-Wall -Wextra -Werror
OPTION	= 	-c
SRCS	= 	main.c				\
			complete_map.c		\
			fill.c				\
			first.c				\
			ft_charact.c		\
			ft_check_map.c		\
			ft_get_char.c		\
			ft_get_lines.c		\
			ft_lines_length.c	\
			ft_nb_char.c		\
			init_tab_int.c		\
			open_map.c 			\
			print_tab.c			\
			resolve_all.c		\
			rock.c

OBJS	= 	$(SRCS:.c=.o)

all		: 	$(NAME)

$(NAME)	:	$(OBJS)
			gcc $(FLAG) $(OPTION) $(SRCS)
			gcc $(FLAG) -o $(NAME) $(OBJS)

clean	:
			/bin/rm -f $(OBJS)

fclean	:	clean	
			/bin/rm -f $(NAME)

re		: 	fclean all
