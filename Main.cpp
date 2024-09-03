#include <iostream>
#include "Lib.hpp"

namespace space1 {
	void foo() {
		std::cout << "Пространство 1\n";
	}
	int var;
}

namespace space2{
	void foo() {
		std::cout << "Пространство 2\n";
	}
	int var;
}

//продление пространства имен
namespace space1 {
	void poo() {
		std::cout << "ПУ!\n";
	}
}

int global;


int main() {
	setlocale(LC_ALL, "russian");

	space1::foo();
	space1::var = 7;
	std::cout << "var = " << space1::var << std::endl;
	space2::foo();
	space1::poo();
	space2::say_hi();

	space2::Person p1("Young Thug", 33);
	p1.print();

	int global;

	global = 10; //Обращение к локальной переменной
	::global = 7; //Обращение к глобальной переменной

	return 0;
}