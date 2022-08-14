/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_creat_velocity.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akekesi <akekesi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 14:04:07 by akekesi           #+#    #+#             */
/*   Updated: 2022/08/14 14:04:07 by akekesi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "header.h"

t_vehicle	*ft_create_vehicle(char *type, float price)
{
	t_vehicle	*vehicle;

	vehicle = (t_vehicle *) malloc(sizeof(t_vehicle) * 1);
	if (vehicle == NULL)
		return (NULL);
	vehicle -> type = type;
	vehicle -> price = price;
	return (vehicle);
}
