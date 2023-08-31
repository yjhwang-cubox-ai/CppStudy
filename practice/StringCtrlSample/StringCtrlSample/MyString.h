#pragma once

class CMyString {
public:
	CMyString();
	CMyString(const char* m_data);

	~CMyString();

	explicit CMyString(const CMyString& rhs);
	CMyString& operator= (CMyString& rhs);

	operator char* (void) const;

	int SetString(const char* pszParam);
	const char* Getstring() const;
	void Release();
private:
	char* m_pszData;
	int m_nLength;
};