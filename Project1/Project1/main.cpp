#include <iostream>

class cat {
public:
	cat(int age) : mAge(age) {};
	void speak() {
		static int count = 0;
		std::cout << count << " meow" << std::endl;
		count++;
	}
	//static int count;
private:
	int mAge;
};

class Zoo {
public:
	Zoo(int age) :zoocat(cat(5)) {};
private:
	cat zoocat;
};

//int cat::count = 0;

int main() {

	cat kitty(5);
	cat nabi(10);
	kitty.speak();
	nabi.speak();

	return 0;
}