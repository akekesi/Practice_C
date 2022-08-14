/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akekesi <akekesi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 09:45:45 by akekesi           #+#    #+#             */
/*   Updated: 2022/08/14 09:45:45 by akekesi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdio.h>
# include <stdlib.h>
# include "struct.h"

t_vehicle	*ft_create_vehicle(char *type, float price);
t_trip		*ft_create_trip(
				char *departure,
				char *arrival,
				float distance,
				t_vehicle *vehicle
				);
void		ft_print_vehicle(t_vehicle *vehicle);
void		ft_print_trip(t_trip *trip);
void		ft_print_journey(t_trip **journey);
t_trip		*ft_journey_last(t_trip *journey);
void		ft_journey_add_last(t_trip **journey, t_trip *trip);
void		ft_journey_add_first(t_trip **journey, t_trip *trip);
void		ft_journey_add_nth(t_trip **journey, t_trip *trip, int n);
int			ft_journey_ntrips(t_trip **journey);
float		ft_journey_cost(t_trip **journey);
float		ft_journey_distance(t_trip **journey);

#endif
