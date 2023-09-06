#pragma once

class CMyString {
public:
	CMyString();
	explicit CMyString(const char* m_data);

	~CMyString();

	CMyString(const CMyString& rhs);
	 CMyString(CMyString&& rhs) noexcept;

	CMyString& operator= (CMyString& rhs);

	operator char* (void) const;

	int SetString(const char* pszParam);
	const char* Getstring() const;
	void Release();
private:
	char* m_pszData;
	int m_nLength;
};