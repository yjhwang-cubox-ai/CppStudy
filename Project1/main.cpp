#include <iostream>
#include <vector>

class Cat {
public:
	Cat(int age, std::string name) :mAge(age), mName(name) {};

	void speak() {
		std::cout << "meow~" << mAge << mName << std::endl;
	}

private:
	int mAge;
	std::string mName;
};

int main() {
	std::vector<Cat> cats;
	cats.emplace_back(1, "kitty");
	cats.emplace_back(2, "kitty");
	cats.emplace_back(3, "kitty");

	Cat Nabi(3, "nabi");
	cats.emplace_back(std::move(Nabi));

	for (auto& cat : cats) {
		cat.speak();
	}

	return 0;
}