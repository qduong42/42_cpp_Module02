#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:

		Fixed(void);
		Fixed(int const i_number);
		Fixed(float const f_number);
		Fixed(Fixed const& obj);
		Fixed& operator=(Fixed const& obj);
		~Fixed();

		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits(void)const; //returns raw value fixed-point value
		void setRawBits(int const raw);

	private:

		int _integer;
		static const int _nFracBits= 8;
};

std::ostream& operator<<(std::ostream& o, Fixed const& fp);

#endif

//fixed-point number: <8.3> 8 bits, 3 fractional. signed bits if negative -> 2's complement 
//e.g 7.5 in 8 bit binary rep 0111 . 1000 -> 2 complement = 1000 . 1000
