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

t_trip	*ft_journey_last(t_trip *journey)
{
	t_trip	*trip;

	if (!journey)
		return (NULL);
	trip = journey;
	while (trip->next)
		trip = trip->next;
	return (trip);
}

void	ft_journey_add_last(t_trip **journey, t_trip *trip)
{
	t_trip	*trip_last;

	trip_last = ft_journey_last(*journey);
	trip_last->next = trip;
	trip->prev = trip_last;
}

void	ft_journey_add_first(t_trip **journey, t_trip *trip)
{
	trip->next = *journey;
	(*journey)->prev = trip;
	*journey = trip;
}

void	ft_journey_add_nth(t_trip **journey, t_trip *trip, int n)
{
	t_trip	*trip_prev;

	if (n <= 1)
		ft_journey_add_first(journey, trip);
	else if (n > ft_journey_ntrips(journey))
		ft_journey_add_last(journey, trip);
	else
	{
		trip_prev = *journey;
		while (n - 2)
		{
			trip_prev = trip_prev->next;
			n--;
		}
		trip_prev->next->prev = trip;
		trip->next = trip_prev->next;
		trip->prev = trip_prev;
		trip_prev->next = trip;
	}
}
