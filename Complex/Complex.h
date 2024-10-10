#pragma once
#ifndef Complex_h
#define Complex_h

#include <complex>
#include <xkeycheck.h>

using namespace std;

class Complex{
	double a;
	double b;
	complex<double>* res1 = nullptr;

public:
	Complex(double a, double b);
	Complex();
	~Complex();

	Complex operator+(const Complex& obj);
	Complex operator-(const Complex& obj);
	Complex operator*(const Complex& obj);
	Complex operator/(const Complex& obj);
	
	bool operator!=(Complex& obj);
	bool operator==(Complex& obj);

	friend ostream& operator<<(ostream& out, Complex& obj);
	friend istream& operator>>(istream& in, Complex& obj);

	friend Complex operator+(const Complex& obj1, const Complex& obj2);
	friend Complex operator-(const Complex& obj1, const Complex& obj2);
	friend Complex operator*(const Complex& obj1, const Complex& obj2);
	friend Complex operator/(const Complex& obj1, const Complex& obj2);

	complex<double> get_result();



};

#endif // Complex_h