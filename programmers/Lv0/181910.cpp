// 문자열의 뒤의 n글자
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    for (int i = my_string.length() - n; i < my_string.length(); ++i) {
        answer += my_string[i];
    }
    return answer;
}