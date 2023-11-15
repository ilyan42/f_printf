# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 13:24:06 by ilbendib          #+#    #+#              #
#    Updated: 2023/11/15 13:27:06 by ilbendib         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

_SRCS = 

SRC_DIR = .

SRCS = $(_SRCS:%=$(SRC_DIR)/%)

_HEADERS = printf.h

HEADERS_DIR = .

HEADERS = $(_HEADERS:%=$(HEADERS_DIR)/%)

CC = cc

CFLAGS = -Wall -Wextra -Werror

AR = ar

ARFLAGS = rcs

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

all: $(NAME)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

clean:
	rm -f $(OBJS) 

fclean: clean 
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re 
