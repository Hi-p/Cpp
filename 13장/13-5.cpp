#include <iostream>
using namespace std;

int getexp(int base, int exp) {
    if(base <= 0 || exp <= 0) {
        throw "음수 사용 불가"; // 예외 발생
    }
    int value = 1;
    for(int i = 0; i <exp; i++) {
        value *= base; // = value = value * base;
    }
    return value;
}

int main() {
    int v = 0;
    try {
        v = getexp(2, 3);
        cout << "2의 3승은 " << v << "입니다." << endl;

        v = getexp(2, -3);
        cout << "2의 -3승은 " << v << "입니다." << endl;
    }
    catch (const char* s) {
        cout << s << endl;
    }
}