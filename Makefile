OBJS = $(patsubst %.c, %.o, $(wildcard ft_*.c))
BONUS = $(patsubst %.c, %.o, $(wildcard *_bonus.c))

NAME = libft.a
CC = gcc
CFLAGS = -O3 -Wall -Werror -Wextra
AR = ar
AFLAGS = -rc

.PHONY: all re bonus clean fclean
all : $(NAME) clean

$(NAME) : $(OBJS)
	@$(AR) $(AFLAGS) $(NAME) $(OBJS)

bonus : $(BONUS) $(NAME) libft.h
	@$(AR) $(AFLAGS) $(NAME) $(BONUS)
#Remember: Implicit rule using CC CFLAGS CPPFLAGS
$(OBJS) : libft.h

clean :
	@rm -f $(OBJS) $(BONUS)

fclean : clean
	@rm -f $(NAME)

re : fclean all
