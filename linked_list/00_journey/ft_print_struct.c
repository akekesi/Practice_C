/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_trip.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akekesi <akekesi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:12:28 by akekesi           #+#    #+#             */
/*   Updated: 2022/08/14 16:12:28 by akekesi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_print_vehicle(t_vehicle *vehicle)
{
	printf("Vehicle:   %s\n", vehicle->type);
	printf("Price/km:  %.2f EUR/km\n", vehicle->price);
}

void	ft_print_trip(t_trip *trip)
{
	printf("Memory:    %p\n", trip);
	printf("Departure: %s\n", trip->departure);
	printf("Arrival:   %s\n", trip->arrival);
	ft_print_vehicle(trip->vehicle);
	printf("Distance:  %.2f km\n", trip->distance);
	printf("Price:     %.2f EUR\n", trip->price);
}

void	ft_print_journey(t_trip **journey)
{
	t_trip	*trip;

	trip = *journey;
	printf("Distance:  %.2f km\n", ft_journey_distance(journey));
	printf("Price:     %.2f EUR\n", ft_journey_cost(journey));
	while (trip)
	{
		printf("%p <-- %p --> %p\n", trip->prev, trip, trip->next);
		trip = trip->next;
	}
}
