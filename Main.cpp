#include "Student.h"

int main() {
	Student alex;

	alex.name = "Alex";
	alex.age = 15;

	cout << alex.getInfo() << endl;

	return 0;
}