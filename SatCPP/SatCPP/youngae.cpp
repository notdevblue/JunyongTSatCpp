#include <iostream>
#include <string>
#include <vector>

class patient;
class doctor;

class patient {
private:
	std::string m_name;
	std::vector<doctor*> m_doctors;
public:
	patient(std::string _name)
		: m_name(_name) {

	}

	void adddoctor(doctor *_doctor) {
		m_doctors.push_back(_doctor);
	}

	//void meetdoctor() {
	//	for (auto& e : m_doctors) { // 전방 선언이 존재하지만 안에 m_name 이 존재하는지 모른다
	//		std::cout << "의사: " << e->m_name << std::endl;
	//	}
	//}

	void meetdoctor();


	friend class doctor;
};

class doctor {
private:
	std::string m_name;
	std::vector<patient*> m_patients;
public:
	doctor(std::string _name)
		: m_name(_name) {
	}

	void addpatient(patient* _doctor) {
		m_patients.push_back(_doctor);
	}

	void meetpatinet() {
		for (auto& e : m_patients) {
			std::cout << "환자: " << e->m_name << std::endl;
		}
	}
	
	friend class patient;
};

void patient::meetdoctor() {
		for (auto& e : m_doctors) {
		std::cout << "의사: " << e->m_name << std::endl;
	}
}

int mai234234n()
{
	patient* p1 = new patient("Haeun");
	patient* p2 = new patient("Me");
	patient* p3 = new patient("Joonser");

	doctor* d1 = new doctor("Dr. Seonhan");
	doctor* d2 = new doctor("Dr. Seongbin");

	p1->adddoctor(d1);
	d1->addpatient(p1);

	p2->adddoctor(d2);
	d2->addpatient(p2);

	p2->adddoctor(d1);
	d1->addpatient(p2);	

	p1->meetdoctor();
	p2->meetdoctor();
	p3->meetdoctor();


	delete p1;
	delete p2;
	delete p3;
	delete d1;
	delete d2;

	return(0);
}