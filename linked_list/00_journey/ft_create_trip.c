/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_creat_trip.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akekesi <akekesi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 14:19:16 by akekesi           #+#    #+#             */
/*   Updated: 2022/08/14 14:19:16 by akekesi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "header.h"

t_trip	*ft_create_trip(
	char *departure,
	char *arrival,
	float distance,
	t_vehicle *vehicle
)
{
	t_trip	*trip;

	trip = (t_trip *) malloc(sizeof(t_trip) * 1);
	if (trip == NULL)
		return (NULL);
	trip->departure = departure;
	trip->arrival = arrival;
	trip->vehicle = vehicle;
	trip->distance = distance;
	trip->price = distance * vehicle->price;
	trip->prev = NULL;
	trip->next = NULL;
	return (trip);
}
