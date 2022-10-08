#include <iostream>

using namespace std;

// 법칙은 아니지만 권장
// #define J 0; // 상수는 이걸쓸빠엔 const

// 객체 선언시 const 가 붙으면 class 안 것들을 const
// 객체의 맴버 고정
class some
{
public:
    int m_val = 0;
    void set(int _val) { m_val = _val; }
    const int get() const
    {
        cout << "cosnt\n";
        // m_val = 10; // 이거 안됨
        return m_val;
    }
    // 논리적으론 가저다가 쓰는거지만 컴파일런 모름
    // 예가 바뀐다 안바뀐다 보고 판단이 아닌 이친구가 const 인지 확인함
    // () const {}
    // 가져가서 안 바꿀게 라는 의미

    int get()
    {
        cout << "non cosnt\n";
        return m_val;
    }

    some()
    {
        cout << "constructor\n";
    }

    // Test(som) 하면서 값이 복사가 되면서 호출이 된다고 함. 하나의 인자를 받은 거니까
    // som2 = som;
    // 레퍼런스로 넘기면 아주 효율적으로 넘길 수 있음
    // 참조로 넘기게 되니까

    // 복사 생성자 불리는 경우
    // 1, som2 = som;
    // 2. Test(som)
    // 3. return 할때 (some Test(some _some))

    some(const some &_some)
    {
        m_val = _some.m_val;
        cout << "copy constructor\n";
    }
};

void Test(const some &_some)
{
    cout << &_some << '\n';
    cout << _some.m_val << '\n';
}

// const
// 1. const 가 앞에 있는거
// 리턴한 친구를 상수화 하겠다는 의미
// 2, const 가 뒤에 있는거
// 값을 바꾸지 않겠다 라는 의미

int main()
{
    const some som; // 편의점
    // som.m_val = 10;
    // cout << &som << '\n';
    // Test(som);

    some some1;
    some1.get();

    const some some2;
    some2.get();

    return (0);
}