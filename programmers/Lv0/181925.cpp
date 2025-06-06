// 수 조작하기 2
#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    int diff = 0;
    for (int i = 1; i < numLog.size(); ++i) {
        diff = numLog[i] - numLog[i-1];
        if (diff == 1) {
            answer += 'w';
        } else if (diff == -1) {
            answer += 's';
        } else if (diff == 10) {
            answer += 'd';
        } else if (diff == -10) {
            answer += 'a';
        }
    }
    return answer;
}