#include <iostream>

class Animal {
public:
	virtual void speak() = 0;
	virtual ~Animal() = default;
};

class Dog : public Animal {
public:
	Dog() { std::cout << "Dog" << std::endl; }
	void speak() override { std::cout << "bark!" << std::endl; }
	virtual ~Dog() { std::cout << "Dog dest" << std::endl; }
};

class Cat : public Animal {
public:
	Cat() { std::cout << "Dog" << std::endl; }
	void speak() override { std::cout << "meow~" << std::endl; }
	virtual ~Cat() { std::cout << "Cat dest" << std::endl; }
};

int main() {
	Animal* ptr = NULL;
	int i = 0;
	std::cin >> i;

	if (i == 1) {
		ptr = new Dog();
	}
	else {
		ptr = new Cat();
	}
	ptr->speak();
	delete ptr;

	return 0;
}