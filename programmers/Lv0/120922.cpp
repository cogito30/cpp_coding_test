// 종이 자르기
#include <string>
#include <vector>

using namespace std;

int solution(int M, int N) {
    int answer = 0;
    answer = min((M*(N-1) + M-1), (N*(M-1) + N-1));
    return answer;
}