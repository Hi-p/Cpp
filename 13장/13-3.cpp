#include <iostream>
using namespace std;

bool getexp(int base, int exp, int &res) {
    if(base <= 0 || exp <= 0) {
        return false;
    }
    int value = 1;
    for(int i = 0; i < exp; i++) {
        value *= base; // = value = value * base;
    }
    res = value;
    return true;
}

int main() {
    int v = 0;
    if (getexp(2, 3, v)) {
        cout << "2의 3승은 " << v << "입니다." << endl;
    } else {
        cout << "잘못된 입력입니다." << endl;
    }

    int e = 0;
    if (getexp(2, -3, e)) {
        cout << "2의 -3승은 " << e << "입니다." << endl;
    } else {
        cout << "잘못된 입력입니다." << endl;
    }
}