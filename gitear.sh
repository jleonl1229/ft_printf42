# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    gitear.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/25 11:57:15 by jleon-la          #+#    #+#              #
#    Updated: 2024/01/25 11:57:17 by jleon-la         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

echo "Introdue un commit: "
read comiteame
git status && git add . && git commit -m "$comiteame" && git push
