/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 21:12:20 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/21 02:06:58 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed {
private:
  u_int32_t _fixedVal;
  int const static bits = 8;

public:
  Fixed();
  Fixed(const Fixed &fixed);
  Fixed(int const fix);
  Fixed(float number);

  float toFloat(void) const;
  int32_t toInt(void) const;
  Fixed &operator=(const Fixed &other);
  int getRawBits(void) const;
  void setRawBits(int32_t const raw);
  ~Fixed();
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
#endif
