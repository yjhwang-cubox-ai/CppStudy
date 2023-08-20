#include <iostream>

class Cat {
public:
	Cat() = default;
	Cat(int age) : mAge(age) { std::cout << "constructor!" << std::endl; }
	void speak() {
		std::cout << mAge << std::endl;
	}
private:
	int mAge;
};

int main() {
	Cat cat(33);
	Cat cat2(cat);
	cat.speak();
	cat2.speak();

	return 0;
}