#include <iostream>
using namespace std;

int main() {
    int n, sum, avg;

    while(true) {
        cout << "합을 입력하세요 >> ";
        cin >> sum;
        cout << "인원수를 입력하세요 >> ";
        cin >> n;
        try {
            if (n <= 0) {
                throw n;
            }
            else {
                avg = sum / n;
            }
        }
        catch (int x) {
            cout << "예외 발생!! " << x << "으로 나눌 수 없음" << endl;
            avg = 0;
            cout << endl;
            continue; // 예외가 발생하면 다음 반복으로 넘어감
        }
        cout << "평균 = " << avg << endl << endl;
    }
}