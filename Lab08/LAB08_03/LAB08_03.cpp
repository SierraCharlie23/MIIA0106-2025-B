#include <iostream>
#include <string>
using namespace std;

struct Student {
	// TODO
	string id;
	string nickname;
	string lineid;
	string phone;
};

// TODO: เขียนฟังก์ชันนี้
void printStudent(Student s) {
	// TODO
	cout << "ID: " << s.id << endl;
	cout << "Nickname: " << s.nickname << endl;
	cout << "Line ID: " << s.lineid << endl;
	cout << "Phone: " << s.phone << endl;

}

void inputStudent(Student& s) {
	cout << "Enter ID: ";
	cin >> s.id;
	cout << "Enter Nickname: ";
	cin >> s.nickname;
	cout << "Enter Line ID: ";
	cin >> s.lineid;
	cout << "Enter Phone: ";
	cin >> s.phone;
}

int main() {
	Student s1;
	cout << "=== Input Student 1 ===\n";
	// TODO: cin >> ...
	inputStudent(s1);
	cout << "\n=== Output (from function) ===\n";
	// TODO: เรียก printStudent
	printStudent(s1);

	return 0;
}
