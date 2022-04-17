#include <iostream>
#include <algorithm>
#include "polynomial.h"
using namespace std;

Polynomial::Polynomial() {
	_arrSize = 1;
	_coefficent = new int [1];
	_coefficent[0] = 0;
}
Polynomial::Polynomial(int degree) {
	_arrSize = degree + 1;
	_coefficent = new int[_arrSize];
	for(int i = 0; i < _arrSize; i++) {
		_coefficent[i] = 0;
	}
}
Polynomial::Polynomial(int *coefficientArr, int coefficientCount) {
	_arrSize =  coefficientCount;
	_coefficent = new int [coefficientCount];
	for(int i = 0; i < coefficientCount; i++) {
		_coefficent[i] = coefficientArr[i];
	}
}
Polynomial::Polynomial(Polynomial &other) {
	_arrSize = other._arrSize;
	_coefficent = new int [_arrSize];
	for(int i = 0; i < _arrSize; i++) {
		_coefficent[i] = other._coefficent[i];
	}
}
Polynomial Polynomial::operator+( const Polynomial &other ) const {
	int sizeArr = (_arrSize >= other._arrSize) ? _arrSize : other._arrSize;
		Polynomial decision(sizeArr - 1);
		if(_arrSize >= other._arrSize) {
			for(int i = 0; i < other._arrSize; i++) {
				 decision._coefficent[i] = _coefficent[i] + other._coefficent[i];
			} 
			for(int i = other._arrSize; i <_arrSize; i++) {
				decision._coefficent[i] = _coefficent[i];
			} 
		} else {
			for(int i = 0; i < _arrSize; i++) {
				decision._coefficent[i] = _coefficent[i] + other._coefficent[i];
			} 
			for(int i = _arrSize; i < other._arrSize; i++) {
				decision._coefficent[i] = other._coefficent[i];
			} 
		}
	return decision;
	
}
Polynomial Polynomial:: operator-( const Polynomial &other ) const {
	int sizeArr = (_arrSize >= other._arrSize) ? _arrSize : other._arrSize;
	Polynomial decision(sizeArr - 1);
	if(_arrSize >= other._arrSize) {
		for(int i = 0; i < other._arrSize; i++) {
			decision._coefficent[i] = _coefficent[i] - other._coefficent[i];
		} 
		for(int i = other._arrSize; i <_arrSize; i++) {
			decision._coefficent[i] = _coefficent[i];
		} 
	} else {
		for(int i = 0; i < _arrSize; i++) {
			decision._coefficent[i] = _coefficent[i] - other._coefficent[i];
		} 
		for(int i = _arrSize; i < other._arrSize; i++) {
			decision._coefficent[i] = other._coefficent[i];
		} 
	}
	return decision;

}
Polynomial Polynomial::operator*( const Polynomial &other ) const {
	int degreeDecision = _arrSize + other._arrSize - 2;
	Polynomial decision (degreeDecision);
	for(int i = 0; i < _arrSize; i++) {
		for(int j = 0; j < other._arrSize; j++) {
			decision._coefficent[i+j] += (_coefficent[i] * other._coefficent[j]);
		}
	}
	return decision;
}

Polynomial& Polynomial::operator=(const Polynomial& assignment) {
  if(this != &assignment) {
    Polynomial tmp(assignment);
    swap(tmp);
  }
    return *this;
}

Polynomial &Polynomial::operator+=( const Polynomial &other ) {
	*this = *this + other;
	return *this;
} 
Polynomial &Polynomial::operator-=( const Polynomial &other){
	*this = *this - other;
	return *this;
}
Polynomial &Polynomial::operator*=( const Polynomial &other ) {
	*this = *this * other;
	return *this;
}

std::istream& operator >> (std::istream& in, Polynomial& polynom) {
    std::cout << "Enter degree: ";
    in >> polynom._arrSize;
    for (int index =polynom._arrSize; index >= 0; index--) {
        std::cout << "x^" << index << " = ";
        in >> polynom._coefficent[index];
    }
    return in;
}

std::ostream& operator << (std::ostream& out, const Polynomial& polynom) {
    for (int index = polynom._arrSize; index >= 0; index--) {
            out << polynom._coefficent[index] << "x^" << index << " + ";
    }
    return out;
}
/*
void Polynomial::print(){
	for(int i = _arrSize - 1; i >= 1; i--) {
		if(_coefficent[i] !=0) {
			cout << _coefficent[i] << "x^" << i << " + ";
		}
	}
	if(_coefficent[0] != 0) {
     cout << _coefficent[0];
  }
	cout << "\n";
}*/

