#include <iostream>

class mystring {
public:
	char* m_data = nullptr;
	int m_length = 0;

public:
	inline mystring(const char* _other) {
		m_length = strlen(_other) + 1;
		m_data = new char[m_length];

		for (int i = 0; i < m_length; ++i) {
			m_data[i] = _other[i];
		}

		m_data[m_length - 1] = '\0';
	}

	//inline mystring(const mystring& _other) {
	//	m_length = strlen(_other.m_data) + 1;
	//	m_data = new char[m_length];
	//	for (int i = 0; i < m_length; ++i) {
	//		m_data[i] = _other.m_data[i];
	//	}
	//	m_data[m_length - 1] = '\0';
	//} // 요거 이상하게 마음에 안 들어요 힣

	inline mystring(const mystring& _other) {
		m_length = _other.m_length;
		m_data = new char[m_length];

		if (_other.m_data == nullptr) throw "mystring::mystring() -> _other.m_data is nullptr";

		for (int i = 0; i < m_length; ++i) {
			m_data[i] = _other.m_data[i];
		}

		m_data[m_length - 1] = '\0';
	}

	inline ~mystring() {
		delete[] m_data;
	}

	//inline mystring* operator=(const mystring& _other) {

	//}
};

int m1ain()
{
	mystring str("Gentoo is in my heart");
	std::cout << (int*)str.m_data << std::endl; // 주소값 찍으러면 이렇게 해야함. 오버로딩 되어있음
	//std::cout << str.m_length << std::endl;
	//{
		mystring copy(str);
		std::cout << (int*)copy.m_data << std::endl;
		//std::cout << copy.m_length << std::endl;
	//}
	//std::cout << str.m_data << std::endl;

	return(0);
}