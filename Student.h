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

	void setName(string initName) {
		this->name = name;
	}

	int getAge() {
		return stoi(age);
	}

	void setAge(int age) {
		if (age >= 14 && age <= 80) {
			this->age = to_string(age);
		}
	}

	void setAge(string age) {
		int number = stoi(age);
		if (number >= 14 && number <= 80) {
			this->age = age;
		}
	}

	string getStringAge() {
		return age;
	}

	string getInfo() {
		return name + ": age = " + age;
	}
};