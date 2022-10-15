#include <iostream>

// 1. 시그니처가 안맞으면 쓸수 없음
// 2. 상태를 가질 수 없음 (아레 Acc 랑 비교하면 무슨 소린지 알 수 있음)

// int test(int a, int b) {
//     printf("%d", a + b);
//     return 0;
// }

// int test2(int a) {
//     printf("%d", a);
//     return 0;
// }

class Acc {
private:
    int m_count = 0;
public:
    int operator()(int _num){
        return (m_count += _num);
    }
};

int main ()
{
    // printf("%d\n", fn(1, 2));
    // Acc acc;
    // printf("%d\n", acc(5));
    // printf("%d\n", acc(5));

    int a;
    int count = 10;
    auto lambda1 = [&count](int _num) -> int
    {
        count += _num;
        return count;
    };

    printf("%d\n", lambda1(10));

    return (0);
}