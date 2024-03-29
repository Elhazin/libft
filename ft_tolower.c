/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouzanb <abouzanb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:58:54 by abouzanb          #+#    #+#             */
/*   Updated: 2022/10/21 19:11:57 by abouzanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int a)
{
	if (a <= 90 && a >= 65)
		return (a + 32);
	return (a);
}
// This function converts the character to lowercase.