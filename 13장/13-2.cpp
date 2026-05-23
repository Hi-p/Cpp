#include <iostream>
using namespace std;

int getexp(int base, int exp) {
    if(base <= 0 || exp <= 0) { // || : 논리합 연산자, 둘 중 하나라도 참이면 참(OR)
        return -1;
    }
    int value = 1;
    for(int i = 0; i <exp; i++) {
        value *= base; // = value = value * base;
    }
    return value;
}

int main() {
    int v = 0;
    v = getexp(2, 3);
    if (v != -1)
        cout << "2의 3승은 " << v << "입니다." << endl;
    else
        cout << "잘못된 입력입니다." << endl;

    int e = 0;
    e = getexp(2, -3);
    if (e != -1)
        cout << "2의 -3승은 " << e << "입니다." << endl;
    else
        cout << "잘못된 입력입니다." << endl;
}