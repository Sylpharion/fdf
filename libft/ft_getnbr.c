/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smassand <smassand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 16:39:01 by smassand          #+#    #+#             */
/*   Updated: 2015/11/30 16:45:44 by smassand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_getnbr(char *str)
{
    int ret;

    ret = 0;
    if (str != NULL && str[0] == '-')
            return (-ft_getnbr(&str[1]));
    while ((*str >= '0') && (*str <= '9'))
    {
        ret = (ret * 10) + (*str - '0');
        str++;
    }
    return (ret);
}
