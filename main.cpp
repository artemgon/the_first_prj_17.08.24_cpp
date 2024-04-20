#include <iostream>
using namespace std;

int main() {
	float first_resistance;
	cout << "Please, enter the value of R1:";
	cin >> first_resistance;
	float second_resistance;
	cout << "Please, enter the value of R2:";
	cin >> second_resistance;
	float third_resistance;
	cout << "Please, enter the value of R3:";
	cin >> third_resistance;
	float seroth_resistance = 1 / first_resistance + 1 / second_resistance + 1 / third_resistance;
	cout << "R0 = " << seroth_resistance;
	return 0;
}