#include <iostream>

// 정방선언 하지 않으면 A 클레스에선 B 의 존재를 모르기 때문에 에러가 남
class A;
class B;

class A {
private:
    int m_val = 1;
    friend void some(const A &a, const B &b);
    friend class B; // 이건좀
};

class B {
private:
    int m_val = 2;
    // friend void some(const A &a, const B &b);
public:
    inline void some(const A& a) {
        printf("%d", a.m_val);
    }
};

// void some(const A &a, const B &b) {
//     printf("%d %d", a.m_val, b.m_val);
// }

int main()
{
    // some();
    
    return (0);
}