#include <iostream>
#include <string>
using namespace std;

class myexception {
    int lineno;
    string func, msg;
public:
    myexception(int n, string f, string m) { lineno = n; func = f; msg = m;}
    void print() { cout << func << ": " << lineno << ", " << msg << endl;}
};

class dividebyzeroexcption : public myexception {
public:
    dividebyzeroexcption(int lineno, string func, string msg) : myexception(lineno, func, msg) {}
};

class invalidinputexception : public myexception {
public:
    invalidinputexception(int lineno, string func, string msg) : myexception(lineno, func, msg) {}
};

int main() {
    int x, y;
    try {
        cout << "나눗셈을 합니다. 두 개의 양의 정수를 입력하세요>> ";
        cin >> x >> y;
        if(x < 0 || y < 0) {
            throw invalidinputexception(29, "main()", "음수 입력 예외 발생");
        }
        if(y==0) {
            throw dividebyzeroexcption(32, "main()", "0으로 나누는 예외 발생");
        }
        cout << (double)x / (double)y << endl;
    }
    catch(dividebyzeroexcption &e) {
        e.print();
    }
    catch(invalidinputexception &e) {
        e.print();
    }
}