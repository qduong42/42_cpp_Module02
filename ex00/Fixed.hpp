#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public:

		Fixed();
		Fixed(Fixed const& obj);
		Fixed& operator=(Fixed const& obj);
		~Fixed();

		int getRawBits(void)const; //returns raw value fixed-point value
		void setRawBits(int const raw);

	private:

		int _integer;
		static const int _nFracBits= 8; /* can I assigned it here or better in constructor? (Prob cant be in constr 
		because its //static data member (non member attribute according to video which is wrong?)) */
};

#endif

//fixed-point number: <8.3> 8 bits, 3 fractional. signed bits if negative -> 2's complement 

//e.g 7.5 in 8 bit binary rep 0111 . 1000 -> 2 complement = 1000 . 1000
