// 369게임
// 나머지가 0일 경우 주의
#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int answer = 0;
    while (order > 0) {
        if (((order % 10) != 0) && ((order % 10) % 3 == 0)) {
            answer++;
        }
        order /= 10;
    }
    return answer;
}