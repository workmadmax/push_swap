# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/12 10:19:33 by mdouglas          #+#    #+#              #
#    Updated: 2022/12/22 20:05:36 by mdouglas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME										=	push_swap

CC											=	cc
CFLAGS										=	-Wall -Werror -Wextra -g3
RM											=	rm -rf


SRCS										=	check_arguments.c check_digits.c \
													check_duplicate.c cleanup.c \
													error_msg.c \
													push.c rev_rotate.c rotate.c \
													swap.c ultimate.c \
													add_node_head.c add_node_tail.c \
													free_list.c get_lower_idx.c new_list.c \
													atoi_list.c check_sorted.c \
													choose_algorithm.c main.c parsing.c \
													get_bits.c radix.c set_index.c \
													sort_three.c sort_fifty.c

VPATH										=	./srcs/errors ./srcs/instruction \
													./srcs/manage_list ./srcs/parse \
													./srcs/sorting
													
OBJS_DIR									=	objects
OBJS										=	$(patsubst %.c, $(OBJS_DIR)/%.o, $(SRCS))

LIBFT										=	$(LIBPATH)/libft.a
LIBPATH										=	./ft

SAFE_MKDIR									=	mkdir -p
RM											=	rm -f

$(OBJS_DIR)/%.o:							%.c
												$(CC) $(CFLAGS) -c $< -o $@ -I./include

all:										$(NAME)

$(NAME):									$(OBJS_DIR) $(OBJS)
												$(MAKE) -C $(LIBPATH)
												$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)
												
$(OBJS_DIR):
												$(SAFE_MKDIR) $@
												
clean:
												$(MAKE) -C $(LIBPATH) fclean
												$(RM) $(OBJS)

fclean:										clean
												$(MAKE) -C $(LIBPATH) fclean
												$(RM) $(OBJS) $(NAME)

re:											fclean all

.PHONY:										all clean fclean re