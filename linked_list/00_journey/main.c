/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akekesi <akekesi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 09:47:25 by akekesi           #+#    #+#             */
/*   Updated: 2022/08/14 09:47:25 by akekesi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "struct.h"

int	main(void)
{
	t_vehicle	*vehicle1;
	t_vehicle	*vehicle2;
	t_vehicle	*vehicle3;
	t_vehicle	*vehicle4;
	t_trip		**journey;
	t_trip		*trip1;
	t_trip		*trip2;
	t_trip		*trip3;
	t_trip		*trip4;

	printf("\nvehicle:\n");
	vehicle1 = ft_create_vehicle("car", 1.3);
	vehicle2 = ft_create_vehicle("train", 0.5);
	vehicle3 = ft_create_vehicle("airplane", 0.25);
	vehicle4 = ft_create_vehicle("airplane", 0.25);
	ft_print_vehicle(vehicle1);
	ft_print_vehicle(vehicle2);
	ft_print_vehicle(vehicle3);
	ft_print_vehicle(vehicle4);

	printf("\ntrip:\n");
	trip1 = ft_create_trip("BP", "BER", 872, vehicle1);
	trip2 = ft_create_trip("BER", "PAR", 1000, vehicle2);
	trip3 = ft_create_trip("PAR", "STR", 600, vehicle3);
	trip4 = ft_create_trip("STR", "BP", 900, vehicle4);
	ft_print_trip(trip1);
	ft_print_trip(trip2);
	ft_print_trip(trip3);
	ft_print_trip(trip4);

	printf("\njourney:\n");
	journey = &trip2;
	ft_print_journey(journey);
	printf("---\n");

	ft_journey_add_last(journey, trip4);
	ft_print_journey(journey);
	printf("---\n");

	ft_journey_add_first(journey, trip1);
	ft_print_journey(journey);
	printf("---\n");

	ft_journey_add_nth(journey, trip3, 3);
	ft_print_journey(journey);

	printf("\n--- ok ---");

	// free !!!
	// copy trip to use again
	// trip back
}
