# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/23 16:14:00 by ckarl             #+#    #+#              #
#    Updated: 2024/03/21 15:33:26 by ckarl            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
NAME		= RPN
OBJS_DIR	= objs
SRCS_DIR	= .
SRCS		= main.cpp RPN.cpp

OBJS		= $(patsubst $(SRCS_DIR)/%.cpp,$(OBJS_DIR)/%.o,$(SRCS))

	### COLORS ###
RED			= \033[1;31m
GREEN		= \033[1;32m
YELLOW		= \033[1;33m
BLUE		= \033[1;34m
VIOLET		= \033[1;35m
CYAN		= \033[1;36m
WHITE		= \033[1;37m
RESET		= \033[0m

all: $(OBJS_DIR) $(NAME)

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	/bin/rm -rf $(OBJS_DIR)

fclean: clean
	/bin/rm -f $(NAME)
	@echo "$(BLUE)All clean! ✨$(RESET)"

re: fclean all
	@echo "$(GREEN)Cleaned & rebuilt! 💫$(RESET)"

.PHONY: all clean fclean re