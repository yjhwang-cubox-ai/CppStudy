#pragma once

class CMyString {
public:
	CMyString();
	~CMyString();

	CMyString(const CMyString& rhs);
	CMyString& operator= (CMyString& rhs);

	int SetString(const char* pszParam);
	const char* Getstring() const;
	void Release();
private:
	char* m_pszData;
	int m_nLength;
};