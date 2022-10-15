#include <iostream>

class A {
public:
    void print() {
        printf("A Hello\n");
    }

    A() {
        printf("Constructor\n");
    }

    ~A() {
        printf("Destructor\n");
    }
};

int main()
{
    // 익명 객체
    A().print();


    return (0);
}