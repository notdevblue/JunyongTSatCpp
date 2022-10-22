// Inheritance (is-a)
#include <iostream>

// 부모 글레스 = generised class
class mother {
private:
	int m_val;
public:
	mother() {}
	mother(const int& _in) {

		std::cout << "mother constructor" << std::endl;
		m_val = _in;
	}

	void setval(const int& _in) {
		m_val = _in;
	}

	const int& getval() { return m_val; }
};

// 자식 클레스 = 파생 클래스 (derived class)
class child : public mother {
private:
	double m_dval;
public:
	child(const int& i_in, const double& d_in)
		: mother(i_in)
		, m_dval(d_in) {

	}
	

	void setval(const int& i_in, const double& d_in) {
		m_dval = d_in;
		mother::setval(i_in);
	}

	const double& getval() { return m_dval; }
};

class son : public mother {

};

class daughter : public mother {

};

int main1()
{
	//mother mom;
	//mom.setval(154);
	//std::cout << mom.getval() << std::endl;

	//child child;
	//child.setval(154, 154.1);
	//std::cout << child.getval() << std::endl;
	//std::cout << child.mother::getval() << std::endl;

	mother mom(154);

	return(0);
}