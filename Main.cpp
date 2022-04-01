#include "Student.h"

int main() {
	Student st1;

	st1.setName("Alex");
	st1.setAge(14);
	st1.setAge("-15");
	
	int dependency = st1.getAge();

	cout << st1.getInfo() << endl;

	return 0;
}