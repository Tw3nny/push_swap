# =========================
# Variables
# =========================
NAME = push_swap
SRCS = main.c \
       parse.c \
       error_utils.c \
       swap.c \
       push.c \
       rotate.c \
       rev_rotate.c \
       algo_utils.c \
       small.c \
       cost.c \
       turk.c

OBJS = $(SRCS:.c=.o)

LIBFT_DIR = ./libft
LIBFT_NAME = libft.a
LIBFT = $(LIBFT_DIR)/$(LIBFT_NAME)

CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(LIBFT_DIR)
RM = rm -f

# =========================
# Regles
# =========================
all: $(NAME)

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	@$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re