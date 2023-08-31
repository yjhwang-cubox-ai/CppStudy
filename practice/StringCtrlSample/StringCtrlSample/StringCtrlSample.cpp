#include "MyString.h"
#include <iostream>

void TestFunc(const CMyString &param) {
	std::cout << param << std::endl;
}


int main() {
	/*CMyString strData, strTest;
	strData.SetString("Hello");
	strTest.SetString("World");*/
	CMyString strData("Hello");
	::TestFunc(strData);
	::TestFunc(CMyString("world"));

	//// 복사 생성
	//CMyString strNewdata(strData);
	//std::cout << strNewdata.Getstring() << std::endl;

	//// 단순 대입 연산자 호출
	//strNewdata = strTest;
	//std::cout << strNewdata.Getstring() << std::endl;

	return 0;
}