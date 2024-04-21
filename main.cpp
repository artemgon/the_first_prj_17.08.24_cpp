#include <iostream>
#include <cmath>
using namespace std;

int main() {
	const float pi = 3.14;
	float circumference;
	cout << "Please, enter the circumference:";
	cin >> circumference;
	float radius = circumference / (2 * pi);
	float circle_area = pi * pow(radius, 2);
	cout << "Area of circle = " << circle_area;
	return 0;
}