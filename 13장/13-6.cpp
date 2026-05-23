#include <iostream>
#include <cstring>
using namespace std;

int stringtoint(const char x[]) {
    int sum = 0;
    int len = strlen(x);
    for (int i = 0; i < len; i++) {
        if(x[i] >= '0' && x[i] <= '9') {
            sum = sum * 10 + x[i] - '0'; // sum = sum * 10 + (x[i] - '0');
        }
        else {
            throw x;
        }
    }
    return sum;
}

int main() {
    int n;
    try {
        n = stringtoint("123");
        cout << "\"123은 정수\" " << n << "로 변환됨" << endl;
        n = stringtoint("1A3");
        cout << "\"1A3은 정수\" " << n << "로 변환됨" << endl;
    }
    catch (const char* s) {
        cout << s << "처리에서 예외 발생!!" << endl;
        return 0;
    }
}