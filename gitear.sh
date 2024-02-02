# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    gitear.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/25 11:57:15 by jleon-la          #+#    #+#              #
#    Updated: 2024/02/02 18:16:55 by jleon-la         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

echo "Introduce a commit: "
read comitme
git status && git add . && git commit -m "$comitme" && git push
