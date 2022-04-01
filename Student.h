#pragma once
#include <iostream>
#include <string>

using namespace std;

class Student {
public:
	string name;
	string age;

	string getInfo() {
		return name + ": age = " + age;
	}
};