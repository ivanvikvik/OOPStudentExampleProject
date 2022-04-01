#include "Student.h"

int main() {
	Student alex;

	alex.name = "Alex";
	alex.age = 15;

	alex.age = -15;

	int dependency = alex.age;

	cout << alex.getInfo() << endl;

	return 0;
}