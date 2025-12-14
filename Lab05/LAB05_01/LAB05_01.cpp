#include <iostream>
#include <string>
using namespace std;


double circleArea(double radius)
{
		
    return 3.14 * radius * radius;
}
int rectArea(int width, int height)
{
	return width * height;
}

int main()
{
	double radius;
	int height, width;
	cout << "Enter radius of circle: ";
	cin >> radius;
	cout << "Enter width of rectangle: ";
	cin >> width;
	cout << "Enter height of rectangle: ";
	cin >> height;


	double circleA = circleArea(radius);
	cout << "Circle Area: " << circleA << endl;
	int recA = rectArea(width, height);
	cout << "Rectangle Area: " << recA << endl;
}
