#include "MyString.h"
#include <iostream>

void TestFunc(const CMyString& param) {
	std::cout << param.Getstring() << std::endl;
}


int main() {
	CMyString strData;
	strData.SetString("Hello");
	strData.SetString("World");
	std::cout << strData.Getstring() << std::endl;

	return 0;
}