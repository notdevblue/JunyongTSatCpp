#include <iostream>
#include <fstream>

class Money {
private:
    int m_won;
    int m_dollar;

public:
    Money() {}
    Money(const Money &_mon) : m_dollar(_mon.m_dollar), m_won(_mon.m_won) {}
    // Money(char) = delete;

    Money(int _won, int _dollar) : m_won(_won), m_dollar(_dollar) { }

    explicit Money(int _won) : m_won(_won) { }

    int getwon() const { return m_won; }
    int getdollar() const { return m_dollar; }

    void money_print() {
        printf("%d 달러 %d 원\n", m_dollar, m_won);
    }

    friend std::ostream &operator<<(std::ostream &_out, const Money &_money) {
        _out << _money.m_dollar << " " << _money.m_won << "\n";
        return _out;
    }
};

Money some() {
    Money temp(2880, 2);
    return temp;
}
// Return Value Optimization?
// 반환값 최적화 라고 함

void something(Money _money) {
    std::cout << _money;
}

int main ()
{
    // Money m1(1440, 1);
    // Money m2(m1);
    // Money m2 = m1; // 이거도 복사 생성자가 불러짐
    // Money m3(Money(1440, 1)); // 이러면 복사 생성자가 안 불림. 컴파일러가 m3(1440, 1) 로 최적회 함
    // std::cout << m2 << std::endl;
    // Money result = some(); // 예전에 C# 에 휘발성. 생성하고 처리를 안 하니까 컴파일러가 Money result(2880, 2) 로 바꿔줌
    // std::cout << result;

    Money money(1);
    // Money money('c'); // delete 키워드를 사용하면 강제로 함수를 막을 수 있음
    // something(1); // explicit 를 사용하면 암시적으로 생성자를 호출하지 않음

    return (0);
}