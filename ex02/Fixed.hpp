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

		Fixed &operator++(void);
		Fixed &operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);
		static Fixed &max(Fixed &f1, Fixed &f2);
		static Fixed &min(Fixed &f1, Fixed &f2);
		static const Fixed &max(Fixed const &f1, Fixed const &f2);
		static const Fixed &min(Fixed const &f1, Fixed const &f2);
};

std::ostream &operator<<(std::ostream &os, const Fixed &f);

#endif

