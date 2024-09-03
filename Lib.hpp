#pragma once
#include<string>


namespace space2 {
	void say_hi();

	class Person {
	private:
		std::string name;
		int age;
	public:
		Person();
		Person(std::string name, int age);
		void print() const;
	};
}