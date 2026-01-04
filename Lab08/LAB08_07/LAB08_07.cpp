#include <iostream>
#include <string>
using namespace std;

struct Phone {
	string mobile;
	string home;

};
struct Parent {
	string name;
	string relationship;
	Phone contact;
};

struct Student {
	
	string id;
	string nickname;
	string lineid;
	Phone myContact;
	Parent myParent;
	
};



int main() {
	Student s1;
	cout << "=== Input Student information ===\n";
	
	cout << "Enter ID: ";
	cin >> s1.id;
	cout << "Enter Nickname: ";
	cin >> s1.nickname;
	cout << "Enter Line ID: ";
	cin >> s1.lineid;
	cout << "Enter Mobile Phone: ";
	cin >> s1.myContact.mobile;
	cout << "Enter Home Phone: ";
	cin >> s1.myContact.home;
	cout << "Enter Parent Name: ";
	cin >> s1.myParent.name;
	cout << "Enter Parent Relationship: ";
	cin >> s1.myParent.relationship;
	cout << "Enter Parent Mobile Phone: ";
	cin >> s1.myParent.contact.mobile;
	cout << "Enter Parent Home Phone: ";
	cin >> s1.myParent.contact.home;

	
	cout << "\n=== Output Student information ===\n";
	
	cout << "ID: " << s1.id << endl;
	cout << "Nickname: " << s1.nickname << endl;
	cout << "Line ID: " << s1.lineid << endl;
	cout << "Mobile Phone: " << s1.myContact.mobile << endl;
	cout << "Home Phone: " << s1.myContact.home << endl;
	cout << "Parent Name: " << s1.myParent.name << endl;
	cout << "Parent Relationship: " << s1.myParent.relationship << endl;
	cout << "Parent Mobile Phone: " << s1.myParent.contact.mobile << endl;
	cout << "Parent Home Phone: " << s1.myParent.contact.home << endl;


	return 0;
}
