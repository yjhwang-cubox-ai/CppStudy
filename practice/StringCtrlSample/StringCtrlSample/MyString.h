#pragma once

class CMyString {
public:
	CMyString();
	~CMyString();

	int SetString(const char* pszParam);
	const char* Getstring() const;
	void Release();
private:
	char* m_pszData;
	int m_nLength;
};