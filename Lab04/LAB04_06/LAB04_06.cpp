#include <iostream>
using namespace std;
int main()

{
	char direction;
	do {
		cout << "Enter the sensor's value (L for left, R for right, M for move forward, F for arrived): ";
		cin >> direction;
		cin.ignore();
		switch (direction) {
		case 'L':
		case 'l':
			cout << "Car is moving to the left." << endl;
			break;
		case 'R':
		case 'r':
			cout << "Car is moving to the right." << endl;
			break;
		case 'M':
		case 'm':
			cout << "Car is moving forward." << endl;
			break;
		case 'F':
		case 'f':
			cout << "Car is arrived at destination." << endl;
			break;
		default:
			cout << "Invalid sensor's value, Car is stopped" << endl;
		}

	} while (direction != 'F' && direction != 'f');
}
