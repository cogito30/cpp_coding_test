// 치킨 쿠폰
#include <string>
#include <vector>

using namespace std;

int solution(int chicken) {
    int answer = 0;
    while (chicken >= 10) {
        answer += chicken / 10;
        chicken = chicken % 10 + chicken / 10;
    }
    return answer;
}