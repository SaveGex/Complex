#include <iostream>
#include <format>
#include "Complex.h"

using namespace std;

double transform(complex<double> digit) {
	return abs(digit);
}

int main() {

	Complex obj1;
	Complex obj2(3, 20);
	cin >> obj1;
	//cout << obj1;
	cout << "\nobj1 ? obj2";
	cout << '\n' << obj1.get_result() << ' ' << obj2.get_result();
	cout << format("\n{} + {} = {}", transform(obj1.get_result()), transform(obj2.get_result()), transform((obj1 + obj2).get_result()));
	cout << format("\n{} - {} = {}", transform(obj1.get_result()), transform(obj2.get_result()), transform((obj1 - obj2).get_result()));
	cout << format("\n{} * {} = {}", transform(obj1.get_result()), transform(obj2.get_result()), transform((obj1 * obj2).get_result()));
	cout << format("\n{} / {} = {}", transform(obj1.get_result()), transform(obj2.get_result()), transform((obj1 / obj2).get_result()));
	cout << '\n' << "obj1 != obj2: " << ((obj1 != obj2) ? "true" : "false");
	cout << '\n' << "obj1 == obj2: " << ((obj1 == obj2) ? "true" : "false");


	return 0;
}