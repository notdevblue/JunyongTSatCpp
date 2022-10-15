#include <iostream>

class Money {
private:
    int m_won;
public:
    Money() {}
    Money(int _won) { m_won = _won; }
    int getwon() const { return m_won; }
    int& getwon() { return m_won; }

    // =, [], (), -> 는 맴버로만 연산자 오버로딩을 들고 있어야 함.
    // 다른거는 밖에다가 해도 됨
    Money operator+(const Money& _right) {
        return Money(this->m_won + _right.m_won);
    }
};
// void operator-(const Money& _m1, const Money& _m2) {
//     // 대충 이게 밖임
// }

// void Add(const Money &_m1, const Money &_m2, Money &_out) {
//     _out.getwon() = _m1.getwon() + _m2.getwon();
// }

Money Add(const Money &_m1, const Money &_m2) {
    return Money(_m1.getwon() + _m2.getwon());
}

int main ()
{
    Money won1(10);
    Money won2(50);
    Money sum;
    // Add(won1, won2, sum);
    // printf("%d\n", sum.getwon());
    // printf("%d\n", Add(won1, won2).getwon());
    printf("%d\n", (won1 + won2).getwon());

    return (0);
}