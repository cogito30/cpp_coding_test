// 중복된 숫자 개수
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    for (int i = 0; i < array.size(); ++i) {
        if (array[i] == n) {
            answer++;
        }
    }
    return answer;
}