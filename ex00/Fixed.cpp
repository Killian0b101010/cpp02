/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 01:57:11 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/19 05:16:07 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() {
  this->_fixedVal = 0;
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
  this->_fixedVal = fixed._fixedVal;
  std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

int Fixed::getRawBits() const { return (this->_fixedVal); }

Fixed &Fixed::operator=(const Fixed &other) {

  std::cout << "Copy assignement operator called" << std::endl;
  this->_fixedVal = other.getRawBits();
  return (*this);
}

void Fixed::setRawBits(int const raw) { this->_fixedVal = raw; }
