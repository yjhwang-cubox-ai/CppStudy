#include <iostream>
#include <array>

class Animal {
public:
	virtual void speak() {
		std::cout << "animal~" << std::endl;
	}
};

class Cat : public Animal {
public:
	Cat() {
		std::cout << "cat Constructor" << std::endl;
	};
	Cat(int age) : mAge(age) { std::cout << "cat Constructor   " << mAge << std::endl; };
	void speak() override {
		std::cout << "meow~" << std::endl;
	}
	~Cat() {
		std::cout << "cat Destructor" << std::endl;
	}
private:
	int mAge;
};

class Dog : public Animal {
public:
	Dog() {
		std::cout << "dog Constructor" << std::endl;
	}
	void speak() override {
		std::cout << "bark!!!" << std::endl;
	}
	~Dog() {
		std::cout << "dog Denstructor" << std::endl;
	}
};

int main() {
	std::array<Animal*, 5> animals;
	for (auto& animal : animals) {
		int i = 0;
		std::cin >> i;
		if (i == 1)
		{
			animal = new Cat;
		}
		else
		{
			animal = new Dog;
		}
	}

	std::unique_ptr<Cat> a = std::make_unique<Cat>(5);

	return 0;
}