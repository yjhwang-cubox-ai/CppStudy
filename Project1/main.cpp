#include <iostream>

class Cat {
public:
	Cat(): mAge(1) {
		std::cout << "constructor" << std::endl;
	}
	Cat(int age): mAge(age) {
		std::cout << "constructor + age" << std::endl;
	}
	~Cat() {
		std::cout << "destructor" << std::endl;
	}
	void speak() {
		std::cout << "meow~" << std::endl;
	}
private:
	int mAge;
};

class Zoo {
public:
	Zoo(int kittyage) : mkitty(kittyage) { };
private:
	Cat mkitty;
};

int main() {
	Zoo zoo(5);

	return 0;
}