#include <iostream>

using namespace std;

// 생성자 (Constructor): 객체가 생성되면서 도와주는 함수

class Fraction
{
private:
    int m_numerator; // 분자
    int m_denominator; // 분모


public:
    void fr_print()
    {
        cout << m_numerator << " / " << m_denominator << endl;
    }

    Fraction()
    {
        m_numerator = 1;
        m_denominator = 2;
    }

    ~Fraction()
    {

    }
};

int main()
{
    Fraction frac;
    frac.fr_print();

    return (0);
}