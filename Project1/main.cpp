#include <iostream>

class Animal {
public:
	virtual void speak() {
		std::cout << "Animal meow~" << std::endl;
	}
	virtual ~Animal() = default;
private:
	double height;
};

class Cat : public Animal {
public:
	void speak() override {
		std::cout << "Cat meow~" << std::endl;
	}
private:
	double width;
};

int main() {
	std::cout << "Animal size: " << sizeof(Animal) << std::endl;
	std::cout << "Cat size: " << sizeof(Cat) << std::endl;

	Animal* ptr = new Cat();
	ptr->speak();
	delete ptr;

	return 0;
}