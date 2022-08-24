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
		~Fixed();
		Fixed& operator=(Fixed const& obj);

		/* Comparisons */
		bool operator<(Fixed const& obj)const;
		bool operator>(Fixed const& obj)const;
		bool operator>=(Fixed const& obj)const;
		bool operator<=(Fixed const& obj)const;
		bool operator==(Fixed const& obj)const;
		bool operator!=(Fixed const& obj)const;

		/* Arithmetic */
		Fixed operator+(Fixed const& obj)const;
		Fixed operator-(Fixed const& obj)const;
		Fixed operator*(Fixed const& obj)const;
		Fixed operator/(Fixed const& obj)const;

		/* Increments */
		Fixed& operator++(void); // pre increment
		Fixed operator++(int); // post increment
		Fixed& operator--(void);
		Fixed operator--(int);

		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits(void)const; //returns raw value fixed-point value
		void setRawBits(int const raw);

		static Fixed& min(Fixed& obj1, Fixed& obj2);
		static Fixed const& min(Fixed const& obj1, Fixed const& obj2);
		static Fixed& max(Fixed& obj1, Fixed& obj2);
		static Fixed const& max(Fixed const& obj1, Fixed const& obj2);

	private:

		int _integer;
		static const int _nFracBits= 8; /* Can only be assigned here or cpp file, not in constructor. Static data member only declared once per class (non member attribute according to video (half right only))) */
};

std::ostream& operator<<(std::ostream& o, Fixed const& fp);


#endif

//fixed-point number: <8.3> 8 bits, 3 fractional. signed bits if negative -> 2's complement 

//e.g 7.5 in 8 bit binary rep 0111 . 1000 -> 2 complement = 1000 . 1000
