/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouzanb <abouzanb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:53:48 by abouzanb          #+#    #+#             */
/*   Updated: 2022/10/08 16:05:22 by abouzanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int a)  // This function checks if the character is alphanumeric.
{
	if ((a <= 90 && a >= 65) || (a <= 122 && a >= 97) || (a <= '9' && a >= '0'))
		return (1);
	return (0);
}
