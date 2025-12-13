#include <iostream>
using namespace std;

int main()
{
	// For loop that prints numbers from 1 to 10
	cout << "For Loop: \n";
	for (int i = 1; i <= 10; i++)
	{
		cout << i << " ";
	}
	
	// While loop that prints numbers from 1 to 10
	cout << "\n\nWhile Loop: \n";
	int i = 1;
	while (i <= 10)
	{
		cout << i << " ";
		i++;
	}

	// Do-while loop that prints numbers from 1 to 10
	cout << "\n\nDo-While Loop: \n";
	i = 1;
	do
	{
		cout << i << " ";
		i++;
	} while (i <= 10);

	return 0;
}

