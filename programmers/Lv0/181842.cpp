// 부분 문자열
#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int answer = 1;
    if (str2.find(str1) == string::npos) {
        answer = 0;
    }
    return answer;
}