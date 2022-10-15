#include <iostream>
#include <fstream>

class Money {
private:
    int m_won;
    int m_dollar;

public:
    Money() {}
    Money(int _won, int _dollar) : m_won(_won), m_dollar(_dollar) { }

    int getwon() const { return m_won; }
    int getdollar() const { return m_dollar; }

    void money_print() {
        printf("%d 달러 %d 원\n", m_dollar, m_won);
    }

    friend std::ostream &operator<<(std::ostream &_out, const Money &_money) {
        _out << _money.m_dollar << " " << _money.m_won << "\n";
        return _out;
    }

    friend std::istream &operator>>(std::istream &_in, Money &_money) {
        _in >> _money.m_dollar >> _money.m_won;
        return _in;
    }
};

int main ()
{
    Money m1(1440, 1);
    Money m2(2880, 2);
    // m1.money_print();
    // m2.money_print();

    // std::cout << m1 << m2;

    std::ofstream of("han");
    of << m1 << " " << m2 << '\n';
    of.close();

    return (0);
}