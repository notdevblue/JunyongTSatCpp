#include <iostream>

using namespace std;

int main()
{
    // int a = 5;

    // &: address-of-operator
    // 저짝 주소 가면 이런거 있음
    // *: de-reference operator
    // 저짝에 뭐 있나 함 보자 마
    // cout << a << endl;
    // cout << &a << endl;
    // cout << *(&a) << endl;

    // int *ptr = nullptr; // c++ (modern c++)
    // modern c++ => c++11 이후
    // int *ptr1 = NULL; // c

    // int arr[5] = {1, 2, 3, 4, 5};
    // cout << arr[0] << " " << arr[1] << endl;
    // cout << arr << endl;
    // cout << &(arr[0]) << endl;


    // 참조 변수: 포인터보다 편함 ㅎ
    // => 별명

    int value = 5;
    int *ptr = nullptr;
    ptr = &value;

    int& ref = value;
    // int &ref2; 는 안됨
    // int &ref3 = 100; 도 안됨
    // l-value 만 쌉가능

    cout << &value << endl;
    cout << &ref << endl;
    cout << ptr << endl;
    cout << &ptr << endl;
    // 같은 메모리 공간에 value 하고 ref 가 같이 있음
    // cout << ref << endl;
    // ref = 10;
    // cout << value << " " << ref << endl;
}