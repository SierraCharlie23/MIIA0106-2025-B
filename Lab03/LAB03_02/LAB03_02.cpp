#include <iostream>
#include <string>
using namespace std;

int main(){
	string name;
	int age;
	float height;

	cout << "Enter your name: ";
	getline(cin, name);
	cout << "Enter your age: ";
	cin >> age;
	cout << "Enter your height: ";
	cin >> height;


	cout << "Your Profile" << endl;
	cout << "-----------------" << endl;
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Height: " << height << endl;

	return 0;
}