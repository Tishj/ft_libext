# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tbruinem <tbruinem@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/02/11 23:29:26 by tbruinem       #+#    #+#                 #
#    Updated: 2020/02/13 18:15:37 by tbruinem      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libext.a
FLAGS = -Wall -Wextra -Werror
SRC_DIR = ./src/
INCL_DIR = ./incl/
OBJ_DIR = ./obj/

ifdef DEBUG
	FLAGS += -g -fsanitize=address
endif

STR_DIR = str/
CHR_DIR = chr/
MEM_DIR = mem/
NUM_DIR = num/

SRC =	$(addprefix $(CHR_DIR), ft_chrmatchc.c \
		ft_chrmatchs.c \
		ft_chrmatchr.c \
		ft_chrcprint.c \
		ft_chrcprintfd.c \
		ft_chrprint.c \
		ft_chrprintc.c \
		ft_chrprintfd.c \
		ft_chrprintfdc.c \
		ft_chrprintfds.c \
		ft_chrprints.c \
		ft_chrsprint.c \
		ft_chrmatchw.c) \
		$(addprefix $(NUM_DIR), ft_numprint.c) \
		$(addprefix $(MEM_DIR), ft_calloc.c \
		ft_memset.c) \
		$(addprefix $(STR_DIR), ft_str2del.c \
		ft_str2len.c \
		ft_str2print.c \
		ft_stradd.c \
		ft_straddc.c \
		ft_straddn.c \
		ft_strcat.c \
		ft_strcatc.c \
		ft_strcmp.c \
		ft_strncmp.c \
		ft_strcdup.c \
		ft_strcdups.c \
		ft_strchain.c \
		ft_strstr.c \
		ft_strnstr.c \
		ft_str2dup.c \
		ft_str2prefix.c \
		ft_str2suffix.c \
		ft_strgenc.c \
		ft_strnlenb.c \
		ft_strnprint.c \
		ft_strnump.c \
		ft_strwprint.c \
		ft_strinfix.c \
		ft_strchaindelimc.c \
		ft_strclen.c \
		ft_strclenb.c \
		ft_strclenc.c \
		ft_strclenrev.c \
		ft_strclens.c \
		ft_strcpy.c \
		ft_strdup.c \
		ft_strdupc.c \
		ft_strdups.c \
		ft_strlen.c \
		ft_strlenc.c \
		ft_strlens.c \
		ft_strlenw.c \
		ft_strmatchc.c \
		ft_strnadd.c \
		ft_strncat.c \
		ft_strncpy.c \
		ft_strndup.c \
		ft_strnlen.c \
		ft_strnlenc.c \
		ft_strnlens.c \
		ft_strnskip.c \
		ft_strprefix.c \
		ft_strprint.c \
		ft_strrev.c \
		ft_strrlen.c \
		ft_strrlenc.c \
		ft_strrlens.c \
		ft_strsadd.c \
		ft_strscat.c \
		ft_strscpy.c \
		ft_strsdup.c \
		ft_strskipc.c \
		ft_strskips.c \
		ft_strskipw.c \
		ft_strshift.c \
		ft_strslen.c \
		ft_strslenb.c \
		ft_strnlenrevc.c \
		ft_strslenc.c \
		ft_strslenrev.c \
		ft_strslens.c \
		ft_strsplitc.c \
		ft_strsplits.c \
		ft_strsplitw.c \
		ft_strsuffix.c \
		ft_strtrims.c \
		ft_strtrimsf.c \
		ft_strwdup.c \
		ft_strwlen.c)

OBJ =	$(SRC:%.c=%.o)

all: $(NAME)

test:
	@gcc $(FLAGS) -I $(INCL_DIR) main.c $(addprefix $(SRC_DIR), $(SRC))

%.o: %.c
	gcc $(FLAGS) $< -I $(INCL_DIR) -c -o $(OBJ_DIR)$(basename $(notdir $<)).o

$(NAME): $(addprefix $(SRC_DIR), $(OBJ))
	ar -rcs $(NAME) $(addprefix $(OBJ_DIR), $(notdir $(OBJ)))

clean:
	rm -rf $(addprefix $(OBJ_DIR), $(notdir $(OBJ)))

fclean: clean
	rm -rf $(NAME)

re: fclean all
