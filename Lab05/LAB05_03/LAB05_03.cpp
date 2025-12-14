#include <iostream>
using namespace std;


void swapValue(int a, int b)
{	
	int temp = a;
	a = b;
	b = temp;
	cout << "Inside swapValue: a = " << a << ", b = " << b << endl;

}
	

void swapReference(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}


int main()
{
	int a, b;
	cout << "Enter first integer: ";
	cin >> a;
	cout << "Enter second integer: ";
	cin >> b;
	cout << "Before swapValue: a = " << a << ", b = " << b << endl;
	swapValue(a, b);
	cout << "After swapValue (in main): a = " << a << ", b = " << b << endl;
	cout << "Before swapReference: a = " << a << ", b = " << b << endl;
	swapReference(a, b);
	cout << "After swapReference: a = " << a << ", b = " << b << endl;

}
