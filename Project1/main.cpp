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

struct complexNum {
	double real;
	double imag;

	complexNum(double r, double i): real{ r }, imag{ i } {};

	void print() const
	{
		std::cout << real << " " << imag << "i" << std::endl;
	}
};

complexNum operator+(complexNum lhs, complexNum rhs) {
	complexNum c{ lhs.real + rhs.real, lhs.imag + rhs.imag };
	return c;
}


int main() {
	Zoo zoo(5);

	complexNum c1{ 1,1 };
	complexNum	c2{ 1,2 };

	complexNum c{ c1+c2 };
	c.print();

	return 0;
}