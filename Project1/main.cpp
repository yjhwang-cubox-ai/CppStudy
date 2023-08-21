#include <iostream>

class Animal {
public:
	Animal() {
		std::cout << "constructor!" << age << std::endl;
	}
	int age = 1000;
protected:
	int mAge =100;
private:
	int mmAge;
};

class Person : protected Animal {
public:
	void speak() {
		std::cout << mAge << std::endl;
	}
	void speak2() {
		std::cout << age << std::endl;
	}

	/*void speak2() {
		std::cout << mmAge << std::endl;
	}*/
};

int main() {
	Person person;
	Animal dog;
	//int a = person.age;
	int b = dog.age;


	person.speak();
	person.speak2();

}