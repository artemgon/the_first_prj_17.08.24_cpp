#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float initial_velocity;
	cout << "Please, enter the initial velocity:";
	cin >> initial_velocity;
	float time;
	cout << "Please, enter the time:";
	cin >> time;
	float acceleration;
	cout << "Please, enter the acceleration:";
	cin >> acceleration;
	float displacement = initial_velocity * time + (acceleration * pow(time, 2)) / 2;
	cout << "The displacement = " << displacement;
	return 0;
}