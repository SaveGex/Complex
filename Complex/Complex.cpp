#include <iostream>
#include "Complex.h"

Complex::Complex(double a, double b) : a{ a }, b{ b }
{
 	res1 = new complex<double>(a + b);
}

Complex::Complex() : Complex::Complex(0.0, 0.0)
{
}

Complex::~Complex()
{
	delete res1;
}

Complex Complex::operator+(const Complex& obj){
	return Complex(this->a + obj.a, this->b + obj.b);
}

Complex Complex::operator-(const Complex& obj){
	return Complex(this->a - obj.a, this->b - obj.b);
}

Complex Complex::operator*(const Complex& obj){
	return Complex(
		this->a * obj.a - this->b * obj.b, 
		this->a * obj.b + this->a * obj.b
	);
}

Complex Complex::operator/(const Complex& obj){
	double denominator = obj.a * obj.a + obj.b * obj.b;
	return Complex(
		(this->a * obj.a + this->b * obj.b) / denominator,
		(this->b * obj.a - this->a * obj.b) / denominator
	);
}

bool Complex::operator!=(Complex& obj){
	if (this->get_result() != obj.get_result()) {
		return true;
	}
	return false;
}

bool Complex::operator==(Complex& obj){
	if (this->get_result() == obj.get_result()) {
		return true;
	}
	return false;
}

complex<double> Complex::get_result(){
	return *this->res1;
}

ostream& operator<<(ostream& out, Complex& obj){
	out << obj.a << " + " << obj.b << "i";
	return out;
}

istream& operator>>(istream& in, Complex& obj){
	std::cout << "Write double type separeted by \".\" like 1.2 \na (space) b:\n";
	in >> obj.a >> obj.b;
	delete obj.res1;
	obj.res1 = new complex<double>(obj.a + obj.b);
	return in;
}

Complex operator+(const Complex& obj1, const Complex& obj2){
	return Complex(obj1.a + obj2.a, obj1.b + obj2.b);
}

Complex operator-(const Complex& obj1, const Complex& obj2){
	return Complex(obj1.a - obj2.a, obj1.b - obj2.b);
}

Complex operator*(const Complex& obj1, const Complex& obj2){
	return Complex(
		obj1.a * obj2.a - obj1.b * obj2.b,
		obj1.a * obj2.b + obj1.a * obj2.b
	);
}

Complex operator/(const Complex& obj1, const Complex& obj2){
	double denominator = obj2.a * obj2.a + obj2.b * obj2.b;
	return Complex(
		(obj1.a * obj2.a + obj1.b * obj2.b) / denominator,
		(obj1.b * obj2.a - obj1.a * obj2.b) / denominator
	);
}
