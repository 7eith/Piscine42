# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: amonteli <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/07/20 13:15:49 by amonteli     #+#   ##    ##    #+#        #
#    Updated: 2019/07/20 16:31:45 by amonteli    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME 	= 	rush-02
FLAG 	= 	-Wall -Wextra -Werror
OPTION	= 	-c
SRCS	= 	main.c
OBJS	= 	$(SRCS:.c=.o)

all		: 	$(NAME)

$(NAME)	:	$(OBJS) 
			$(CC) $(FLAG) $(OPTION) $(SRCS)
			$(CC) $(FLAG) -o $(NAME) $(OBJS)

clean	:
			/bin/rm -f $(OBJS)

fclean	:	clean	
			/bin/rm -f $(NAME)

re		: 	fclean all
