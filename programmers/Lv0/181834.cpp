// l로 만들기
#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    for (int i = 0; i < myString.length(); ++i) {
        if (myString[i] < 'l') {
            myString[i] = 'l';
        }
    }
    answer = myString;
    return answer;
}