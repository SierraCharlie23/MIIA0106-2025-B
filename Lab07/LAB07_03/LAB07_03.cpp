#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int* p = &a;

	*p = 100; // Modify the value of 'a' through the pointer 'p'

    cout << "a = " << a << endl;
    return 0;
}
