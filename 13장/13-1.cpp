#include <iostream>
using namespace std;

int getexp(int base, int exp) {
    int value = 1;
    for(int i = 0; i <exp; i++) {
        value *= base; // = value = value * base;
    }
    return value;
}

int main() {
    int v = getexp(2, 3);
    cout << "2의 3승은 " << v << "입니다." << endl;

    int e = getexp(2, -3);
    cout << "2의 -3승은 " << e << "입니다." << endl;
}