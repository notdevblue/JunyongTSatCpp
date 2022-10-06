#include <iostream>
#include <vector>
#include <string>

using namespace std;

// C++ 에선 struct 와 class 차이가 거의 없음
// 기본 접근 제한자가 다름

// 일반적으로 
// struct: 단순 데이터 묶을 때
// class: 데이터와 기능을 묶을 때
// 객체지향 3대: 상속, 은닉(캡슐), 다형
class Friend
{
public:
    string name;
    int _class;
    string loltier;

    void friend_print()
    {
        cout << name << " " << _class << " " << loltier << endl;
    }
};


int main()
{
    // 인스턴스가 찍히면 메모리에 올리감
    // Instantiation
    Friend han{"Han", 1, "언렝인데"};
    han.friend_print();

    // vector<Friend> vec_friend;

    // vector<string> vec_name;
    // vector<int> vec_class;
    // vector<string> vec_loltier;
    // friend_print(vec_name[0], vec_class[0], vec_loltier[0]);
}