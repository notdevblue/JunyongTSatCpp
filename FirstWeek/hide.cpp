#include <iostream>

using namespace std;

// 객체지향 3 또는 4대..
// 캡슐, 상속, 다형성

// 캡슐 => set, get
// 캡슐화는 숨긴다
// 다른 친구를 통해서 멤버가 바뀜
// 그래서 set_date() 로 변경


class Date
{
private: // 내꺼야 근들즈므르
    int m_month;
    int m_day;
    int m_year;

public:
    void set_date(const int &_month, const int& _day, const int& _year)
    {
        m_month = _month;
        m_day = _day;
        m_year = _year;
        // 이 글을 보고 계신다면 저는 모기와 힘겨운 사투를 하고 있습니다.
    }

    // 안 바꾸고 그대로 통째로 보내고 싶다 히히
    const int& get_day() { return m_day; }

    void copy_from(const Date& _origin)
    {
        // 다른 인스턴스여도 같은 클레스라면 private 에 접근할 수 있음
        // 마치 이것처럼
        
        m_month = _origin.m_month;
        m_day = _origin.m_day;
        m_year = _origin.m_year;
    }
};

int main()
{
    // Date now = {10, 1, 2022};
    Date now;
    // now.m_month = 10;
    // now.m_day = 1;
    // now.m_year = 2022;

    now.set_date(10, 1, 2022);

    cout << now.get_day() << endl;

    Date copy;
    copy.copy_from(now);

    cout << copy.get_day() << endl;
}
