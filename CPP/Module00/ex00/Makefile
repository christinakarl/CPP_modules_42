# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 13:51:36 by ckarl             #+#    #+#              #
#    Updated: 2023/09/21 14:39:34 by ckarl            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98
NAME		= megaphone
OBJS_DIR	= objs
SRCS_DIR	= .
SRCS		= megaphone.cpp
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
	@echo "$(VIOLET)Successfully compiled $(NAME) 💥$(RESET)"

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	/bin/rm -rf $(OBJS_DIR)

fclean: clean
	/bin/rm -f $(NAME)
	@echo "$(BLUE)All clean! ✨$(RESET)"

re: fclean all
	@echo "$(GREEN)Cleaned & rebuilt! 💫$(RESET)"

.PHONY: all clean fclean re