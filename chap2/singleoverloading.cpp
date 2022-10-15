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

    Money operator-() const {
        return Money(-m_won);
    }

    bool operator!() const {
        return m_won ? false : true;
    }
};

int main ()
{
    Money m1(10);
    Money m2(50);
    
    std::cout << !m1 << " " << m2;

    return (0);
}