// 제곱수 판별하기
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 2;
    for (int i = 1; i <= n; ++i) {
        if (i * i == n) {
            answer = 1;
            break;
        }
    }
    return answer;
}