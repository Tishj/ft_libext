# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tbruinem <tbruinem@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/02/11 23:29:26 by tbruinem       #+#    #+#                 #
#    Updated: 2020/02/12 01:44:10 by tbruinem      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libext.a
FLAGS = -Wall -Wextra -Werror
SRC_DIR = ./src/
INCL_DIR = ./incl/
OBJ_DIR = ./obj/

STR_DIR = str/
CHR_DIR = chr/

SRC = 	$(addprefix $(STR_DIR), ft_strclen.c \
		ft_strclenc.c \
		ft_strclens.c \
		ft_strlen.c \
		ft_strlens.c \
		ft_strlenc.c \
		ft_strnlen.c \
		ft_strnlenc.c \
		ft_strnlens.c \
		ft_strrlen.c \
		ft_strrlenc.c \
		ft_strrlens.c \
		ft_strslen.c \
		ft_strslenc.c \
		ft_strlenw.c \
		ft_strslens.c) \
		$(addprefix $(CHR_DIR), ft_chrmatchs.c \
		ft_chrmatchc.c \
		ft_chrmatchw.c)

OBJ =	$(SRC:%.c=%.o)

all: $(NAME)

%.o: %.c
	gcc $(FLAGS) $< -I $(INCL_DIR) -c -o $(OBJ_DIR)$(basename $(notdir $<)).o

$(NAME): $(addprefix $(SRC_DIR), $(OBJ))
	ar -rcs $(NAME) $(addprefix $(OBJ_DIR), $(notdir $(OBJ)))

clean:
	rm -rf $(addprefix $(OBJ_DIR), $(notdir $(OBJ)))

fclean: clean
	rm -rf $(NAME)

re: fclean all
