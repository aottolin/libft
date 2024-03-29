# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aottolin <aottolin@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/16 15:28:39 by aottolin          #+#    #+#              #
#    Updated: 2024/01/17 12:42:50 by aottolin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_calloc.c \
	   ft_isdigit.c \
	   ft_memcpy.c \
	   ft_strdup.c \
	   ft_strlen.c \
	   ft_strtrim.c \
	   ft_isalnum.c \
	   ft_isprint.c \
	   ft_memmove.c \
	   ft_strjoin.c \
	   ft_strncmp.c \
	   ft_substr.c \
	   ft_atoi.c \
	   ft_isalpha.c \
	   ft_memchr.c \
	   ft_memset.c \
	   ft_strlcat.c \
	   ft_strnstr.c \
	   ft_tolower.c \
	   ft_bzero.c \
	   ft_isascii.c \
	   ft_memcmp.c \
	   ft_strchr.c \
	   ft_strlcpy.c \
	   ft_strrchr.c \
	   ft_toupper.c \
	   ft_itoa.c \
	   ft_split.c \
	   ft_strmapi.c \
	   ft_striteri.c \
	   ft_putchar_fd.c \
	   ft_putstr_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c \

SRCS_BONUS = ft_lstnew.c \
			 ft_lstadd_front.c \
			 ft_lstsize.c \
			 ft_lstlast.c \
			 ft_lstadd_back.c \
			 ft_lstdelone.c \
			 ft_lstclear.c \
			 ft_lstiter.c \
			 ft_lstmap.c 

FLAGS = -Wall -Wextra -Werror -MMD 
OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)
DEPS = $(SRCS:.c=.d)
DEPS_BONUS = $(SRCS_BONUS:.c=.d)
BONUS = .bonus
all: $(NAME)
CC = gcc

%.o:%.c Makefile libft.h
	 $(CC) $(FLAGS) -I ./ -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(BONUS)

$(BONUS): $(OBJS) $(OBJS_BONUS)
	ar rcs $(NAME) $(OBJS) $(OBJS_BONUS)
	touch $@

clean:
	rm -f $(OBJS) $(OBJS_BONUS) $(DEPS) $(DEPS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

-include $(DEPS)
-include $(DEPS_BONUS)

.PHONY: all clean fclean re bonus 
