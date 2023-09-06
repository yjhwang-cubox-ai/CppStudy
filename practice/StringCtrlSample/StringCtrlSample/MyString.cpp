#include "MyString.h"
#include <iostream>
using namespace std;

CMyString::CMyString():m_pszData(nullptr), m_nLength(0) {

}

CMyString::CMyString(const char* m_data) : m_pszData(NULL), m_nLength(0) {
	SetString(m_data);
}

CMyString::~CMyString()
{
	Release();
}

CMyString::CMyString(const CMyString& rhs):m_pszData(NULL), m_nLength(0) {
	this->SetString(rhs.Getstring());
}

CMyString::CMyString(CMyString&& rhs) noexcept {
	cout << "이동생성자" << endl;
	m_pszData = rhs.m_pszData;
	m_nLength = rhs.m_nLength;

	rhs.m_pszData = NULL;
	rhs.m_nLength = 0;
}

CMyString&  CMyString::operator= (CMyString& rhs) {
	if (this != &rhs)
		this->SetString(rhs.Getstring());

	return *this;
}

CMyString::operator char* (void) const{
	return m_pszData;
}

int CMyString::SetString(const char* pszParam) {
	//Release();

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