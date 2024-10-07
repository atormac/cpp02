#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int _value;
		const static int _bits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &f);
		Fixed(const int i);
		Fixed(const float f);
		~Fixed();

		int getRawBits( void ) const;
		void setRawBits( int const raw);
		int toInt(void) const;
		float toFloat(void) const;

		Fixed &operator=(const Fixed &f);
		bool operator>(const Fixed &f) const;
		bool operator<(const Fixed &f) const;
		bool operator>=(const Fixed &f) const;
		bool operator<=(const Fixed &f) const;
		bool operator==(const Fixed &f) const;
		bool operator!=(const Fixed &f) const;

		Fixed operator+(const Fixed &f) const;
		Fixed operator-(const Fixed &f) const;
		Fixed operator*(const Fixed &f) const;
		Fixed operator/(const Fixed &f) const;

		static Fixed &max(Fixed &f1, Fixed &f2);
		static Fixed &min(Fixed &f1, Fixed &f2);
};

std::ostream &operator<<(std::ostream &os, const Fixed &f);

#endif

