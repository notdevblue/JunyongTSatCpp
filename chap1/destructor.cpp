#include <iostream>

using namespace std;
// 소멸자: 객체가 영역을 벗어나거나, 소멸될 때 실행되는 함수

class Simple {
private:
    int m_id;

public:
    Simple(const int& _id)
        : m_id(_id) {
        cout << "constructor" << m_id << '\n';
    }

    ~Simple() {
        cout << "destructor" << m_id << '\n';
    }
};

// 생성자 호출 순서: 전역 -> 지역
// Simple s3(3);

class intstr
{
private:
    int *m_arr = nullptr;
    int m_length = 0;
public:
    intstr(const int _length)
    {
        // * <- dereferenceoperator
        m_length = _length;
        m_arr = new int[m_length];
        cout << "constructor\n";
        cout << this << '\n';
    }

    ~intstr()
    {
        if (m_arr != nullptr)
            delete[] m_arr;
    }
};

int main()
{
    // Simple s1(1);
    // Simple *s1 = new Simple(1);
    // delete (s1);
    // Simple s2(2);
    // for (int i = 0; i < 10000; ++i)
    //     intstr myarr(100000000);

    intstr is1(10);
    cout << &is1 << '\n';


    return (0);
}