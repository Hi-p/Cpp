#include <iostream>
using namespace std;

class mystack {
    int data[100];
    int tos;
public:
    mystack() { tos = -1; }
    void push(int n);
    int pop();
};

void mystack::push(int n) {
    if(tos == 99)
        throw "Stack Full";
    tos++;
    data[tos] = n;
}

int mystack::pop() {
    if (tos == -1)
        throw "Stack Empty";
    int rdata = data[tos--];
    return rdata;
}

int main() {
    mystack intstack;
    try {
        intstack.push(100);
        intstack.push(200);
        cout << intstack.pop() << endl;
        cout << intstack.pop() << endl;
        cout << intstack.pop() << endl;
    }
    catch (const char* s) {
        cout << "예외 발생 : " << s << endl;
    }
}