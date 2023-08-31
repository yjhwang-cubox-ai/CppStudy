#include "MyString.h"
#include <iostream>

void TestFunc(const CMyString& param) {
	std::cout << param.Getstring() << std::endl;
}


int main() {
	CMyString strData, strTest;
	strData.SetString("Hello");
	strTest.SetString("World");

	// ���� ����
	CMyString strNewdata(strData);
	std::cout << strNewdata.Getstring() << std::endl;

	// �ܼ� ���� ������ ȣ��
	strNewdata = strTest;
	std::cout << strNewdata.Getstring() << std::endl;

	return 0;
}