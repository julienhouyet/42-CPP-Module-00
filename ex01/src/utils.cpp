/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 07:35:38 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/02 13:22:00 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

std::string formatField(const std::string str)
{
	if (str.length() > 10)
	{
		return str.substr(0, 9) + ".";
	}
	else
	{
		return str;
	}
}