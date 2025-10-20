/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 21:09:35 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/20 05:54:34 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
  this->_fixedVal = 0;
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
  this->_fixedVal = fixed._fixedVal;
  std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(float number) {
  std::cout << "Float constructor called" << std::endl;
  _fixedVal = roundf(number * 256);
}

Fixed::Fixed(int const fix) {
  std::cout << "Int constructor called" << std::endl;
  this->_fixedVal = fix << this->bits;
}
float Fixed::toFloat(void) const { return ((float)this->_fixedVal / 256); }

int Fixed::toInt(void) const { return (this->_fixedVal >> this->bits); }

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

int Fixed::getRawBits() const {
  std::cout << "getRawBits member function called" << std::endl;
  return (this->_fixedVal);
}

Fixed &Fixed::operator=(const Fixed &other) {

  std::cout << "Copy assignement operator called" << std::endl;
  this->_fixedVal = other.getRawBits();
  return (*this);
}

std::ostream &operator<<(std::ostream &flux, const Fixed &fixed) {
  flux << fixed.toFloat();
  return (flux);
}

void Fixed::setRawBits(int const raw) { this->_fixedVal = raw; }
