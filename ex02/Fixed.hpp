/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 03:50:16 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/22 02:50:00 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdint>
#include <ostream>
#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {

private:
  // Valeurs initial
  int _fixedVal;
  const static int bits = 8;

public:
  // Constructeur, constructeur de copie
  Fixed();
  Fixed(const Fixed &fixed);
  Fixed(int const fix);
  Fixed(float number);

  // Comparator operator
  bool operator>(const Fixed &other) const;
  bool operator<(const Fixed &other) const;
  bool operator>=(const Fixed &other) const;
  bool operator<=(const Fixed &other) const;
  bool operator==(const Fixed &other) const;
  bool operator!=(const Fixed &other) const;
  Fixed &operator=(const Fixed &other);

  // Arithmetique
  Fixed operator+(const Fixed &other);
  Fixed operator-(const Fixed &other);
  Fixed operator*(const Fixed &other);
  Fixed operator/(const Fixed &other);

  // post Incrementation
  Fixed operator++(int);
  Fixed operator--(int);

  // pre incrementation
  Fixed &operator++();
  Fixed &operator--();

  // Function members
  float toFloat(void) const;
  int32_t toInt(void) const;
  int getRawBits(void) const;
  static Fixed max(Fixed &a, Fixed &b);
  static Fixed max(const Fixed &a, const Fixed &b);
  static Fixed min(Fixed &a, Fixed &b);
  static Fixed min(const Fixed &a, const Fixed &b);

  // Destructor
  ~Fixed();
};
// Comparator operator
std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
#endif
