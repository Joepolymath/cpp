#include <iostream>


double calculateCircleCircumference(double);

int main() {
	double radius = 3.2;
	double circumference = calculateCircleCircumference(radius);
	std::cout << circumference << std::endl;
	return 0;
}

double calculateCircleCircumference(double radius) {
	const double PI = 3.14159;
	return 2 * PI * radius;
}