// 소문자로 바꾸기
#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    for (int i = 0; i < myString.length(); ++i) {
        answer += tolower(myString[i]);
    }
    return answer;
}