//เพิ่ม ให้อัดวีดีโอ 
//เขียน code แสดง 10, 8, 6, 4, 2, 0 โดยมีคำสั่ง loop และ if

#include <iostream>
using namespace std;

int main() {
	for (int i = 10; i >= 0; i--) {
		if (i % 2 == 0) {
			cout << i << " ";
		}
	}
	return 0;
	
}