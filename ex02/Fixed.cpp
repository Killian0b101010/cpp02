/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 21:09:35 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/21 04:04:00 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
// Valeurs initial de notre classe fixed a 0 c'est la valeurs qui
// qui sera dans notre main et qu'on va pouvoir transporter dans la memoire en
// int tous en castant  en float..
Fixed::Fixed() {
  this->_fixedVal = 0;
  std::cout << "Default constructor called" << std::endl;
}

//  Construtcteur de copie tres utile pour copier une instance de classe(generer
//  un autre objet)
Fixed::Fixed(const Fixed &fixed) {
  this->_fixedVal = fixed._fixedVal;
  std::cout << "Copy constructor called" << std::endl;
}

// Constructeur qui prend en parametre le type float il sera arrondis a 2
// chiffre apres la virgule (8 bits) on decale de 1 pour la virgule.
Fixed::Fixed(float number) {
  std::cout << "Float constructor called" << std::endl;
  _fixedVal = roundf(number * (1 << this->bits));
}

// Constructeur qui prend un simple int et qui le return simplement cette fois
// ci on multiplie par 256
Fixed::Fixed(int const fix) {
  std::cout << "Int constructor called" << std::endl;
  this->_fixedVal = fix << this->bits;
}
// ces la fonction qui nous permet de convertir un type float fixed en float..
// on divise par 256 et on ce decale pour la virgule..
float Fixed::toFloat(void) const {
  return (float)this->_fixedVal / (1 << this->bits);
}

// on return juste un int simple
int32_t Fixed::toInt(void) const { return (this->_fixedVal >> this->bits); }

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
