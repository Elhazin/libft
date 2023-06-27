/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouzanb <abouzanb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:55:53 by abouzanb          #+#    #+#             */
/*   Updated: 2022/10/21 19:04:09 by abouzanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isupper(int a)
{ // This function checks if the character is uppercase.
	if (a >= 65 && a <= 90)
		return (1);
	return (0);
}
