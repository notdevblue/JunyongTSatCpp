#include <iostream>
#include <string>
#include <vector>

class teacher {
private:
	std::string m_name;
public:
	teacher() {}

	teacher(const std::string &_name)
		: m_name(_name) {

	}

	void set(const std::string& _name) {
		m_name = _name;
	}

	const std::string& get() { return m_name; }

	friend std::ostream& operator << (std::ostream& _out, const teacher& _teacher) {
		_out << _teacher.m_name;
		return _out;
	}
};


class student {
private:
	std::string m_name;
	int m_intel;
public:
	inline student(const std::string& _name, const int& _intel)
		: m_name(_name)
		, m_intel(_intel) {

	}

	void setname(const std::string& _name) {
		m_name = _name;
	}


	void setintel(const int& _intel) {
		m_intel = _intel;
	}

	const int& getintel() { return m_intel; }

	friend std::ostream& operator << (std::ostream& _out, const student& _student) {
		_out << _student.m_name << ": " << _student.m_intel;

		return _out;
	}
};

class lesson {
private:
	std::string m_name;
	teacher *m_teacher;
	std::vector<student *> m_students;
public:
	lesson(const std::string& _name)
		: m_name(_name) {
	}

	void assign_teacher(teacher* const _teacher) {
		m_teacher = _teacher;
	}

	void enter_student(student* const _student) {
		m_students.push_back(_student);
	}

	void study() {
		std::cout << m_name << " Study" << std::endl;
		for (auto& e : m_students) {
			e->setintel(e->getintel() + 1);
		}
	}

	friend std::ostream& operator << (std::ostream& _out, const lesson& _lesson) {
		_out << "LessonName: " << _lesson.m_name << std::endl;
		_out << *_lesson.m_teacher << std::endl;
		
		for (auto& e : _lesson.m_students) {
			_out << *e << std::endl;
		}


		return _out;
	}

};

int ma233in()
{
	student student1("Han", 100);
	student student2("Junser", 80);
	student student3("parkjein", 154);

	teacher tea1("SeonHanT");
	teacher tea2("MobileT");

	lesson lec1("Project");
	lesson lec2("C++ Basic");

	lec1.enter_student(&student1);
	lec1.enter_student(&student2);
	lec1.enter_student(&student3);
	lec1.assign_teacher(&tea1);


	lec2.enter_student(&student3);
	lec2.assign_teacher(&tea2);

	std::cout << lec1 << std::endl;
	std::cout << lec2 << std::endl;
	lec2.study();
	std::cout << lec1 << std::endl;
	std::cout << lec2 << std::endl;

	return(0);
}