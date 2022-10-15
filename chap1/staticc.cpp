#include <iostream>

using namespace std;

class some
{
private:
    // int m_val = 0;

    // data 영역에 있음
    // 클레스가 공유해서 사용함
    static int m_val;
    int m_val2;

public:
    // static 함수 안에선 일반 변수 참조 불가능
    // data 영역으로 따로 빠져 있기 때문임
    static int get()
    {
        // m_val2 = 10;

        return m_val;
    }

    int test()
    {
        return this->m_val2 + this->m_val;
    }

    some()
        : m_val2(1)
        //, m_val(1000) // 생성자 안에서도 static 맴버변수 초기화 못함, 가능하려면 생성자도 static 이면 됨 but c++ 은 static 생성자 없다.
    {
    }

    class _test
    {
    public:
        _test()
        {
            // 
            m_val = 1544444;
        }
    };
private:
    static _test s_test;
};

// staic 은 외부에서 초기화 해 줘야 함
some::_test some::s_test;
int some::m_val = 1541;

// static: 정작 할당. Data 영역에 들어감 ㅎㅇ
// 전역변수와 함께 시작할때 만들어져서 끝날 때 사라짐
// ### 한번만 초기화됨 ###

// static 멤버 함수
// 선언된 클레스의 모든 객체가 공유
// 객체의 맴버로 존재하는건 아님

int add_id()
{
    static int s_id = 0;
    return ++s_id;
}

int main()
{
    // cout << add_id() << '\n';
    // cout << add_id() << '\n';
    // cout << add_id() << '\n';

    // some some1;
    // some some2;
    // some1.m_val = 10;

    // cout << &some::m_val << " " << some::m_val << '\n';
    // cout << &some1.m_val << " " << some1.m_val << '\n';
    // cout << &some2.m_val << " " << some2.m_val << '\n';

    // some::m_val = 154;

    // cout << &some::m_val << " " << some::m_val << '\n';
    // cout << &some1.m_val << " " << some1.m_val << '\n';
    // cout << &some2.m_val << " " << some2.m_val << '\n';

    some s1;

    // cout << some::m_val << '\n';
    cout << s1.get() << '\n';
    // cout << s1.m_val << '\n';

    return (0);
}