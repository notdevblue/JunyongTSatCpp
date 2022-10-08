#include <iostream>

using namespace std;
 
class calculator
{
private:
    int m_val;
public:
    calculator(const int _val)
        : m_val(_val) {

    }

    inline calculator& add(const int _val) { m_val += _val; return *this; }
    inline calculator& sub(const int _val) { m_val -= _val; return *this; }
    inline calculator& mul(const int _val) { m_val *= _val; return *this; }

    inline void print() {
        cout << m_val << '\n';
    }
};

int main()
{
    calculator calc(10);

    // 이러한 현상을 Chaining call
    calc.add(10).sub(5).mul(3).print();

    

    return (0);
}