# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/25 11:57:00 by jleon-la          #+#    #+#              #
#    Updated: 2024/01/25 15:25:33 by jleon-la         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= ft_printf.c \
					becomer.c

OBJS			= $(SRCS:.c=.o)

CC				= @cc
RM				= @rm -f
CFLAGS			= -Wall -Wextra -Werror

NAME			= libftprintf.a

CLR_RMV     := \033[0m
GREEN       := \033[1;32m
YELLOW      := \033[1;33m
BLUE        := \033[1;34m
CYAN        := \033[1;36m

define  ART
$/\n
$(YELLOW):::::::::  :::::::::  ::::::::::: ::::    ::: :::::::::::     ::::::::::     
$(YELLOW):+:    :+: :+:    :+:     :+:     :+:+:   :+:     :+:         :+:             
$(GREEN)+:+    +:+ +:+    +:+     +:+     :+:+:+  +:+     +:+         +:+       
$(GREEN)+#++:++#+  +#++:++#:      +#+     +#+ +:+ +#+     +#+         :#::+::#     
$(CYAN)+#+        +#+    +#+     +#+     +#+  +#+#+#     +#+         +#+     
$(BLUE)#+#        #+#    #+#     #+#     #+#   #+#+#     #+#         #+#             
$(BLUE)###        ###    ### ########### ###    ####     ###         ###              
$(CLR_RMV)
$/\n
endef
export ART

all:			$(NAME)

$(NAME):		$(OBJS)
				@ar rcs $(NAME) $(OBJS)

$(OBJS): %.o: %.c
				
				$(CC) $(CFLAGS) -c $< -o $@
				@echo "$$ART"

clean:
				@echo "Cleaning..."
				@$(RM) $(OBJS)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean $(NAME)


.PHONY:			all clean fclean re