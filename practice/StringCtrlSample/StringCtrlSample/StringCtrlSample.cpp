#include "MyString.h"
#include <iostream>
using namespace std;

void TestFunc(void) {
	CMyString strTest("TestFunc() return");
	cout << strTest << endl;
}


int main() {
	
	TestFunc();

	return 0;
}