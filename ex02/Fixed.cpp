#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = i << this->_bits;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = (int)roundf(f * (1 << this->_bits));
}

Fixed &Fixed::operator=(const Fixed &f)
{
	this->_value = f.getRawBits();
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _value;
}

void Fixed::setRawBits( int const raw)
{
	_value = raw;
}

int Fixed::toInt(void) const
{
	return this->_value >> this->_bits;
}

float Fixed::toFloat(void) const
{
	return (float)this->_value / (1 << this->_bits);
}

std::ostream &operator<<(std::ostream &os, Fixed const &f)
{
	os << (float)f.toFloat();
	return (os);
}


bool Fixed::operator>(const Fixed &f) const
{
	return this->_value > f._value;
}

bool Fixed::operator<(const Fixed &f) const
{
	return this->_value < f._value;
}

bool Fixed::operator>=(const Fixed &f) const
{
	return this->_value >= f._value;
}

bool Fixed::operator<=(const Fixed &f) const
{
	return this->_value <= f._value;
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1 > f2)
		return f1;
	return f2;
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1 > f2)
		return f2;
	return f1;
}
