# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/01 16:27:19 by jhouyet           #+#    #+#              #
#    Updated: 2024/06/02 07:57:44 by jhouyet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= phonebook

SRC 		= 	PhoneBook.cpp \
				Contact.cpp \
				main.cpp
				
OBJ 		= $(SRC:.cpp=.o)
CC 			= g++
RM 			= rm -f
CPPFLAGS 	= -Wall -Wextra -Werror -std=c++98
	
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re