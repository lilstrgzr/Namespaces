#include "Lib.hpp"
#include <iostream>

void space2::say_hi() {
	std::cout << "Hello world!" << std::endl;
}

space2::Person::Person() : age(0) {}

space2::Person::Person(std::string name, int age){
	this->name = name;
	this->age = age;
}

void space2::Person::print() const{ 
	std::cout << "Name: " << name << std::endl;
	std::cout << "Age: " << age << std::endl;
}
