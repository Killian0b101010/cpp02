/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 21:12:20 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/20 04:54:28 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed {
private:
  int _fixedVal;
  int const static bits = 8;

public:
  Fixed();
  Fixed(const Fixed &fixed);
  Fixed(int const fix);
  Fixed(float number);

  float toFloat(void) const;
  int toInt(void) const;
  Fixed &operator=(const Fixed &other);
  int getRawBits(void) const;
  void setRawBits(int const raw);
  ~Fixed();
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
#endif
