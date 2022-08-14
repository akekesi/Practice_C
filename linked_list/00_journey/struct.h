/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akekesi <akekesi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 09:39:34 by akekesi           #+#    #+#             */
/*   Updated: 2022/08/14 09:39:34 by akekesi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct s_vehicle
{
	char		*type;
	float		price;
}	t_vehicle;

typedef struct s_trip
{
	char			*departure;
	char			*arrival;
	t_vehicle		*vehicle;
	float			distance;
	float			price;
	struct s_trip	*prev;
	struct s_trip	*next;
}	t_trip;

#endif
