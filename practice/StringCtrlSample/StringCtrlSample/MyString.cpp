#include "MyString.h"
#include <iostream>

CMyString::CMyString():m_pszData(nullptr), m_nLength(0) {

}

CMyString::~CMyString()
{
	Release();
}

int CMyString::SetString(const char* pszParam) {
	Release();

	if (pszParam == NULL) return 0;

	int n_Length = strlen(pszParam);

	if (n_Length == 0) return 0;

	m_pszData = new char[n_Length+1];
	strcpy_s(m_pszData, sizeof(char)*(n_Length+1), pszParam);
	m_nLength = n_Length;

	return 0;
}

const char* CMyString::Getstring() const
{
	return m_pszData;
}

void CMyString::Release() 
{
	std::cout << "Release!" << std::endl;
	delete [] m_pszData;

	m_pszData = NULL;
	m_nLength = 0;
}