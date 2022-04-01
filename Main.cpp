#include "Student.h"

int main() {
	Student st1;
	Student st2;
	Student st3;

	st1.setName("Alex");
	st2.setName("Kate");
	st3.setName("Peter");
	
	int dependency = st1.getAge();

	cout << st1.getInfo() << endl;

	return 0;
}