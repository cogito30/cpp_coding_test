// 대문자와 소문자
#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for (int i = 0; i < my_string.length(); ++i) {
        if (islower(my_string[i])) {
            my_string[i] = toupper(my_string[i]);
        } else if (isupper(my_string[i])) {
            my_string[i] = tolower(my_string[i]);
        }
    }
    answer = my_string;
    return answer;
}