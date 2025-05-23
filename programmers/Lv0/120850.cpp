// 문자열 정렬하기 (1)
// 자료형 주의!! (char, string, int)
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    for (int i = 0; i < my_string.length(); ++i) {
        if ((my_string[i] >= '0') && (my_string[i] <= '9')) {
            answer.push_back(my_string[i] - '0');
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}
