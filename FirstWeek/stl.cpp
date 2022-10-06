#include <iostream>
#include <vector>

using namespace std;

int g_i = 0;
// 전역은 데이터 영역에 들어감

int main()
{
    // vector<int> v;
    // v.push_back(1);
    // vector<int>::iterator iter;
    // iter = v.begin();
    // int a = v[0];
    // int b = 0;
    // iterator
    // stl 에서 값 가리키는 포인터
    // 가리키는 값을 우선 가져옴
    // 포인터는 다이렉트
    // iterator 는 값 가져오고 그 다음

    // int arr[] = {1, 2, 3, 4, 5};

    // new 기반 동적 배열은 안됨
    // vector 는 됨
    // for (int& num : arr)
    // {
    //     cout << num << " ";
    //     num = 0;
    // }
    // cout << endl;

    // for (const int& num : arr) // num 이라는 친구를 복사해서 가져옴
    //     cout << num << " ";

    // vector<int> arr = {1, 2, 3, 4, 5};
    // for (int num : arr)
    //     cout << num << " ";
    // cout << endl;

    // 초기화
    // = : Copy init
    // () : Direct init
    // {} : Uniform init

    int a = 4.5; // 일반적
    int b(4.5);  // 암시적 형변환 가능하지만 경고정도 냄
    double c{4.5};  // 까다로운 친구, int 인데 4.5 같은거 넣으면 안 들어감

    cout << a << " " << b << " " << c << endl;


    return (0);
}