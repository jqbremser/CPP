# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/04 15:31:04 by jbremser          #+#    #+#              #
#    Updated: 2025/06/11 15:38:26 by jbremser         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	bob

FLAGS		=	-Wall -Wextra -Werror -std=c++11

FILES		=	main.cpp \
				Weapon.cpp \
				HumanA.cpp \
				HumanB.cpp

SRCDIR		=	srcs
OBJDIR		=	objs

HEADER		=	HumanA.hpp \
				HumanB.hpp \
				Weapon.hpp

SRCS		=	$(addprefix $(SRCDIR)/, $(FILES))

OBJS		=	$(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SRCS))

ANSI_CYAN 	:= 	\033[0;36m
ANSI_BLUE 	:= 	\033[0;34m
ANSI_RED 	:= 	\033[31m
ANSI_RESET 	:= 	\033[0m

all: 			$(NAME)

$(OBJDIR)/%.o:	$(SRCDIR)/%.c $(HEADER) 
				@mkdir -p $(OBJDIR)
				@c++ $(FLAGS) -o $@ -c $<

$(NAME):		$(OBJS)
				@c++ $(FLAGS) -o $(NAME) $(OBJS)
				@echo "$(ANSI_CYAN)Compilation Complete: $(NAME) $(ANSI_RESET)"

clean:
				@rm -rf $(OBJDIR)
				@echo "$(ANSI_RED)Objects removed$(ANSI_RESET)"

fclean:			clean
				@rm -rf $(NAME)
				@echo "$(ANSI_RED)Executable $(NAME) removed$(ANSI_RESET)"

re:				fclean all