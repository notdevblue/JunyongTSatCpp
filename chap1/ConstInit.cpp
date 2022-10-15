#include <iostream>

using namespace std;

// 초기화 방법
// 1. 생성자 내에서 초기화
// 2. 생성자 초기화 (콜론 초기화? 몰루
//
class Some
{
private:
    int m_a = 10;
    double m_b = 155.2;
    char m_c ='h';
    int m_arr[3] = {123, 456, 789};

public:
    Some()
        : m_a(2)
        , m_b(1254.1)
        , m_c('s')
        , m_arr{1,2,3} // {} 이면 0으로 초기화임 ㅎ
    {
        m_a = 1;
        m_b = 154.1;
        m_c = 'a';
    }

    void some_print()
    {
        cout << m_a << " " << m_b << " " << m_c << '\n';

        for (const int& e : m_arr)
        {
            cout << e << " ";
        }

        cout << '\n';
    }
};

int main()
{
    Some some;

    some.some_print();

    return (0);
}
