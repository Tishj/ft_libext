# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tbruinem <tbruinem@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/02/11 23:29:26 by tbruinem      #+#    #+#                  #
#    Updated: 2020/10/04 15:40:58 by tbruinem      ########   odam.nl          #
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
ifdef BUFFER_SIZE
	FLAGS += -D BUFFER_SIZE=$(BUFFER_SIZE)
endif

STR_DIR = str/
PRINTF_DIR = printf/
CHR_DIR = chr/
MEM_DIR = mem/
VEC_DIR = vec/
NUM_DIR = num/
LST_DIR = lst/
QUE_DIR = que/
STK_DIR = stk/
FD_DIR = fd/
TREE_DIR = tree/

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
		ft_chrswapc.c \
		ft_chrmatchw.c) \
		$(addprefix $(PRINTF_DIR), ft_printf.c \
		ft_sprintf.c \
		conv_chr.c \
		conv_di.c \
		conv_str.c \
		conv_uint.c \
		conv_ulong.c \
		debug.c \
		numpadding.c \
		parse.c) \
		$(addprefix $(VEC_DIR), vec_destroy.c \
		vec_getref.c \
		vec_erase.c \
		vec_new.c \
		vector.c) \
		$(addprefix $(TREE_DIR), ft_treeaddparent.c \
		ft_treeaddchild.c \
		ft_treeaddright.c \
		ft_treeaddleft.c \
		ft_treenew.c \
		ft_treeprint.c \
		ft_treebfirst.c) \
		$(addprefix $(FD_DIR), ft_fdchar.c \
		ft_fdstrc.c) \
		$(addprefix $(LST_DIR), ft_lstindex.c \
		ft_lstinfix.c \
		ft_lstlen.c \
		ft_lstnew.c \
		ft_lstaddback.c \
		ft_lstlookup.c \
		ft_lstnptr.c \
		ft_lstprint.c \
		ft_lstprefix.c \
		ft_lstprev.c \
		ft_lstptr.c \
		ft_lstrev.c \
		ft_lstconvstr2.c \
		ft_lstsuffix.c \
		ft_lstdel.c \
		ft_lstcmp.c \
		ft_dlstaddback.c \
		ft_dlstaddbehind.c \
		ft_dlstaddfront.c \
		ft_dlstaddinfront.c \
		ft_dlstclear.c \
		ft_dlstclearleft.c \
		ft_dlstclearright.c \
		ft_dlstdel.c \
		ft_dlstnew.c \
		ft_dlstprint.c \
		ft_dlstswap.c \
		ft_plstnew.c \
		ft_plstptr.c \
		ft_plstsuffix.c \
		ft_plstprefix.c \
		ft_lstswap.c) \
		$(addprefix $(NUM_DIR), ft_numprint.c \
		ft_numlenu_base.c \
		ft_numstru_base.c \
		ft_nummax.c \
		ft_nummin.c \
		ft_numlenul_base.c \
		ft_numstrul_base.c \
		ft_numlen_base.c \
		ft_numstr_base.c \
		ft_numprintbase.c \
		ft_absnum.c) \
		$(addprefix $(MEM_DIR), ft_calloc.c \
		ft_memmove.c \
		ft_memcpy.c \
		ft_memset.c) \
		$(addprefix $(STK_DIR), ft_stkpush.c \
		ft_stkpop.c \
		ft_pstkpop.c \
		ft_pstkpush.c) \
		$(addprefix $(QUE_DIR), ft_quepush.c \
		ft_quepop.c \
		ft_pquepop.c \
		ft_pquepush.c) \
		$(addprefix $(STR_DIR), ft_str2del.c \
		$(addprefix lenf/, \
		ft_len.c \
		ft_limitcheck.c \
		ft_countcheck.c \
		ft_data_count.c \
		ft_data_init.c \
		ft_data_limit.c \
		ft_data_parse.c \
		ft_strlenf.c) \
		ft_strtrunc.c \
		ft_strchr.c \
		ft_strsep.c \
		ft_strtok.c \
		ft_str2len.c \
		ft_str2print.c \
		ft_stradd.c \
		ft_straddc.c \
		ft_straddn.c \
		ft_straddr.c \
		ft_strcat.c \
		ft_strreplace.c \
		ft_str2convlst.c \
		ft_str2cmpstr.c \
		ft_str2ncmpstr.c \
		ft_strcatc.c \
		ft_strcmp.c \
		ft_strccmp.c \
		ft_strncmp.c \
		ft_strcdup.c \
		ft_strcdups.c \
		ft_strchain.c \
		ft_strclenr.c \
		ft_strclenrevc.c \
		ft_strclenrevr.c \
		ft_strclenrevs.c \
		ft_strlenr.c \
		ft_strnlenr.c \
		ft_strnlenrevr.c \
		ft_strnlenrevs.c \
		ft_strrlenb.c \
		ft_strrlenrev.c \
		ft_strrlenrevc.c \
		ft_strrlenrevs.c \
		ft_strslenr.c \
		ft_strslenrevc.c \
		ft_strslenrevr.c \
		ft_strslenrevs.c \
		ft_strwlenb.c \
		ft_strwlenc.c \
		ft_strwlenr.c \
		ft_strwlenrev.c \
		ft_strwlenrevc.c \
		ft_strwlenrevr.c \
		ft_strwlenrevs.c \
		ft_strwlens.c \
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
		ft_strreplacec.c \
		ft_strconvl.c \
		ft_strconvu.c \
		ft_str2fmap.c \
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
		ft_strnskipc.c \
		ft_strnskipr.c \
		ft_strnskips.c \
		ft_strnskipw.c \
		ft_strskipr.c \
		ft_strshift.c \
		ft_strslen.c \
		ft_strslenb.c \
		ft_strnlenrevc.c \
		ft_strslenc.c \
		ft_strslenrev.c \
		ft_strslens.c \
		ft_strcsplit.c \
		ft_strssplit.c \
		ft_strnsplit.c \
		ft_strwsplit.c \
		ft_strsuffix.c \
		ft_strtrims.c \
		ft_strtrimsf.c \
		ft_strwdup.c \
		ft_strwlen.c)

OBJ =	$(SRC:%.c=%.o)
OBJ :=	$(addprefix $(OBJ_DIR), $(OBJ))

all: $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(@D)
	@echo "Compiling $@"
	@gcc $(FLAGS) $< -I $(INCL_DIR) -c -o $@

$(NAME): $(OBJ)
	@ar -rcs $(NAME) $(OBJ)
	@echo "Finished compiling $(NAME)"

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
