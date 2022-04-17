#ifndef POLINOMIAL_H
#define POLYNOMIAL_H

#include <iostream>

class Polynomial{
	private:
		int * _coefficent;
		int _arrSize;
	public:
		Polynomial();
		Polynomial(int degree);
		Polynomial(int *coefficientArr, int coefficientCount);
		Polynomial(Polynomial& other);
		Polynomial operator+( const Polynomial &other) const; 
		Polynomial operator-( const Polynomial &other) const; 
		Polynomial operator*( const Polynomial &other) const; 
		Polynomial &operator+=( const Polynomial &other);
		Polynomial &operator-=( const Polynomial &other);
		Polynomial &operator*=( const Polynomial &other);
    std::istream& operator>>(std::istream&, Polynomial&);
    std::ostream& operator<<(std::ostream&, const Polynomial&);
		int degree();
		void print();
    ~Polynomial();
};
#endif
