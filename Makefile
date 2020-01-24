OBJS = $(patsubst %.c, %.o, $(wildcard ft_str*.c))   \
	   $(patsubst %.c, %.o, $(wildcard ft_mem*.c))   \
	   $(patsubst %.c, %.o, $(wildcard ft_is*.c))    \
	   $(patsubst %.c, %.o, $(wildcard ft_to*.c))    \
	   $(patsubst %.c, %.o, $(wildcard ft_atoi.c))   \
	   $(patsubst %.c, %.o, $(wildcard ft_itoa.c))   \
	   $(patsubst %.c, %.o, $(wildcard ft_cal*.c))   \
	   $(patsubst %.c, %.o, $(wildcard ft_bze*.c))   \
	   $(patsubst %.c, %.o, $(wildcard ft_put*.c))   \
	   $(patsubst %.c, %.o, $(wildcard ft_sub*.c))   \
	   $(patsubst %.c, %.o, $(wildcard ft_spl*.c))   
BONUS = $(patsubst %.c, %.o, $(wildcard *_bonus.c))

NAME = libft.a
CC = gcc
CFLAGS = -O3 -Wall -Werror -Wextra
AR = ar
AFLAGS = -rc

.PHONY: all re bonus clean fclean
all : $(NAME)

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
