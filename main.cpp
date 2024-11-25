#include <iostream>


double calculateCircleCircumference(double);

// typedef std::string text_t; // either this 
using text_t = std::string; // or this...

int main() {
	double radius = 3.2;
	double circumference = calculateCircleCircumference(radius);
	std::cout << circumference << std::endl;

	text_t name = "Joshua";
	return 0;
}

double calculateCircleCircumference(double radius) {
	const double PI = 3.14159;
	return 2 * PI * radius;
}