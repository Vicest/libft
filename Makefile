VPATH := .

SRCS :=
SRCS += ft_atof.c
SRCS += ft_atol.c
SRCS += ft_atoi.c
SRCS += ft_bzero.c
SRCS += ft_calloc.c
SRCS += ft_isalnum.c
SRCS += ft_isalpha.c
SRCS += ft_isascii.c
SRCS += ft_isdigit.c
SRCS += ft_islower.c
SRCS += ft_isprint.c
SRCS += ft_isspace.c
SRCS += ft_isupper.c
SRCS += ft_itoa.c
SRCS += ft_max.c
SRCS += ft_memccpy.c
SRCS += ft_memchr.c
SRCS += ft_memcmp.c
SRCS += ft_memcpy.c
SRCS += ft_memmove.c
SRCS += ft_memset.c
SRCS += ft_min.c
SRCS += ft_putchar_fd.c
SRCS += ft_putendl_fd.c
SRCS += ft_putnbr_fd.c
SRCS += ft_putrstr.c
SRCS += ft_putstr_fd.c
SRCS += ft_split.c
SRCS += ft_strchr.c
SRCS += ft_strcmp.c
SRCS += ft_strcpy.c
SRCS += ft_strdup.c
SRCS += ft_strjoin.c
SRCS += ft_strlcat.c
SRCS += ft_strlcpy.c
SRCS += ft_strlen.c
SRCS += ft_strmapi.c
SRCS += ft_strncmp.c
SRCS += ft_strndup.c
SRCS += ft_strnstr.c
SRCS += ft_strrchr.c
SRCS += ft_strtrim.c
SRCS += ft_strtoi.c
SRCS += ft_strtol.c
SRCS += ft_substr.c
SRCS += ft_tolower.c
SRCS += ft_toupper.c

SRCS += ft_lstadd_back.c
SRCS += ft_lstadd_front.c
SRCS += ft_lstclear.c
SRCS += ft_lstdelone.c
SRCS += ft_lstiter.c
SRCS += ft_lstlast.c
SRCS += ft_lstmap.c
SRCS += ft_lstnew.c
SRCS += ft_lstsize.c

OBJS = $(patsubst %.c, %.o, $(SRCS))

NAME = libft.a
CC = gcc
CFLAGS = -O3 -Wall -Werror -Wextra
AR = ar
AFLAGS = -rc

.PHONY: all re clean fclean bonus
all : $(NAME)

%.o : %.c
	@tput setaf 8
	$(CC) $(CFLAGS) $<  -c -o $@
	@tput sgr0

$(NAME) : $(OBJS)
	$(AR) $(AFLAGS) $(NAME) $(OBJS)

$(OBJS) : libft.h

clean : fclean

bonus : all

fclean :
	@echo "Cleaning:"
	@tput setaf 3
	@rm -rfv $(OBJS) $(NAME)
	@tput sgr0

re : clean fclean all
