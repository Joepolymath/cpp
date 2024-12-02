#include <iostream>
#include <cmath>
#include "hypothenus.h"



double calculateCircleCircumference(double);
double calculateCircleArea(double);
int getRandom(int);

// typedef std::string text_t; // either this 
using text_t = std::string; // or this...

int main() {
	text_t name;

	double radius;
	std::cout << "Enter radius: " << std::endl;
	std::cin >> radius;

	std::getline(std::cin >> std::ws, name);

	std::cout << "Smart one @" << name << std::endl;

	

	double circumference = calculateCircleCircumference(radius);
	double area = calculateCircleArea(radius);


	std::cout << "Circumference is " << circumference << std::endl;
	std::cout << "Area " << area << std::endl;

	std::cout << "Max is " << std::max(circumference, area) << std::endl;

	double opposite = 5.2;
	double adjacent = 2.4;

	double hypothenus = calcHypothenus(opposite, adjacent);
	std::cout << "Hypothenus is " << hypothenus << std::endl;

	std::cout << "This is a random integer. " << getRandom(10) << '\n';

	return 0;
}

double calculateCircleCircumference(double radius) {
	const double PI = 3.14159;
	return 2 * PI * radius;
}

double calculateCircleArea(double radius) {
	const double PI = 3.14159;
	return PI * (pow(radius, 2));
}

int getRandom(int max) {
	srand(time(NULL));

	return rand() % (max + 1);
}