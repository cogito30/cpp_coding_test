// 피자 나눠 먹기 (1)
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    if (n % 7 == 0) {
        answer = n / 7;
    } else {
        answer = (n / 7) + 1;
    }
    return answer;
}