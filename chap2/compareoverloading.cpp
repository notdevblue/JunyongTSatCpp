#include <iostream>

class Money {
private:
    int m_won;
public:
    Money() {}
    Money(int _won) { m_won = _won; }
    int getwon() const { return m_won; }
    int& getwon() { return m_won; }

    friend std::ostream &operator<<(std::ostream &_out, const Money &_money) {
        _out << _money.m_won << "\n";
        return _out;
    }


    bool operator==(const Money& _right) {
        return this->m_won == _right.m_won;
    }
};

int main ()
{
    Money m1(10);
    Money m2(50);

    printf("%d\n", m1 == m2);

    return (0);
}