#include <iostream>

class Data {
public:
	Data(int data) {
		std::cout << "Constructor" << std::endl;
		
		mData = new int;
		*mData = data;
	}

	Data(const Data& rhs) {
		mData = new int;
		*mData = *rhs.mData;
	}

	~Data() {
		delete mData;
	}

	int Getdata() {
		return *mData;
	}

	Data& operator = (const Data & rhs){
		*mData = *rhs.mData;

		return *this;
	}

private:
	int* mData;
};

int main() {
	Data a(10);
	Data b(20);

	b = a;

	std::cout << a.Getdata() << std::endl;
	std::cout << b.Getdata() << std::endl;

	return 0;
}