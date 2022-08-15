/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_journey.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akekesi <akekesi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:29:29 by akekesi           #+#    #+#             */
/*   Updated: 2022/08/14 17:29:29 by akekesi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "header.h"

int	ft_journey_ntrips(t_trip **journey)
{
	int		n;
	t_trip	*trip;

	trip = *journey;
	n = 1;
	while (trip->next)
	{
		trip = trip->next;
		n++;
	}
	return (n);
}

float	ft_journey_cost(t_trip **journey)
{
	float	cost;
	t_trip	*trip;

	trip = *journey;
	cost = trip->price;
	while (trip->next)
	{
		trip = trip->next;
		cost += trip->price;
	}
	return (cost);
}

float	ft_journey_distance(t_trip **journey)
{
	float	distance;
	t_trip	*trip;

	trip = *journey;
	distance = trip->distance;
	while (trip->next)
	{
		trip = trip->next;
		distance += trip->distance;
	}
	return (distance);
}
