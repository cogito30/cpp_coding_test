// [PCCE 기출문제] 3번 / 수 나누기
#include <iostream>

using namespace std;

int main(void) {
    int number;
    cin >> number;
    
    int answer = 0;
    
    while (number > 0){
        answer += number % 100;
        number /= 100;
    }
    cout << answer << endl;
    return 0;
}