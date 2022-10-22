#include "crutch.h"
#include <iostream>

void crutch::use() {
	std::cout << --m_length << std::endl;
}
