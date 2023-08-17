#include <iostream>
#include <string>

class Cat {
public:
	Cat() = default;
	Cat(std::string name, int age) : mName{ std::move(name) }, mAge(age)
	{
		std::cout << mName << " constructor" << std::endl;
	};
	Cat(const Cat& other) : mName{ std::move(other.mName) }, mAge{ other.mAge }{
		std::cout << mName << " copy constructor" << std::endl;
	}
	Cat(Cat&& other) :mName{ std::move(other.mName) }, mAge{ other.mAge }{
		std::cout << mName << " move constructor" << std::endl;
	}
	~Cat()
	{
		std::cout << mName << "destructor" << std::endl;
	}
	void speakName() {
		std::cout << mName << std::endl;
	}

private:
	int mAge;
	std::string mName;
};

int main() {
	Cat kitty{"kitty", 1};
	Cat nabi = kitty;
	Cat nabi2{ std::move(kitty) };
	kitty.speakName();
	nabi.speakName();
	nabi2.speakName();

	return 0;
}