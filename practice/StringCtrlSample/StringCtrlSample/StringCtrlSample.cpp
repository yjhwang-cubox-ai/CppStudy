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

	//// ���� ����
	//CMyString strNewdata(strData);
	//std::cout << strNewdata.Getstring() << std::endl;

	//// �ܼ� ���� ������ ȣ��
	//strNewdata = strTest;
	//std::cout << strNewdata.Getstring() << std::endl;

	return 0;
}