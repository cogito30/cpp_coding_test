// 글자 이어 붙여 문자열 만들기
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> index_list) {
    string answer = "";
    for (int i = 0; i < index_list.size(); ++i) {
        answer += my_string[index_list[i]];
    }
    return answer;
}