#pragma once
#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	string name;
	string age;

public:
	string getName() {
		return name;
	}

	void setName(string n) {
		name = n;
	}

	int getAge() {
		return stoi(age);
	}

	void setAge(int a) {
		if (a >= 14 && a <= 80) {
			age = to_string(a);
		}
	}

	void setAge(string a) {
		int number = stoi(a);
		if (number >= 14 && number <= 80) {
			age = a;
		}
	}

	string getStringAge() {
		return age;
	}

	string getInfo() {
		return name + ": age = " + age;
	}
};