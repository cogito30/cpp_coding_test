// x 사이의 개수
#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    int count = 0;
    for (int i = 0; i < myString.length(); ++i) {
        if (myString[i] == 'x') {
            answer.push_back(count);
            count = 0;
        } else {
            count++;
        }
    }
    answer.push_back(count);
    return answer;
}