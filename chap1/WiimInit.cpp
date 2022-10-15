#include <iostream>

using namespace std;

// 생성자: 기본 생성자, 복사 생성자, 기타 생성자
// 기타 -> 위임생성자, 형변환생성자, 변환생성자 

// 위임생성자: 상성자가 다른 생성자를 사용할 때 이를 위임생성자라 부름
class Student
{
private:
    int m_id;
    string m_name;

public:
    Student(const int& _id, const string& _name)
        : m_id(_id)
        , m_name(_name)
    {
        // super_init(_id, _name); // 대충 이렇게 구현할수도 있음
    }

    Student(const string& _name)
        : Student(1, _name) // 위임 생성자
    {
        super_init(1, _name);
    }

    void super_init(const int& _id, const string& _name)
    {
        m_id = _id;
        m_name = _name;
    }

    void student_print()
    {
        cout << m_id << " " << m_name << '\n';
    }
};

int main()
{
    Student s1(1, "Han");
    s1.student_print();

    Student s2(1, "Parkjein");

    return (0);
}