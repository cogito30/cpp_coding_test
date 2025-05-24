// 2의 영역
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int start = -1;
    int end = -1;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == 2) {
            start = i;
            break;
        }
    }
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == 2) {
            end = i;
        }
    }
    if (start == -1) {
        answer = {-1};
    } else {
        for (int i = start; i <= end; ++i) {
            answer.push_back(arr[i]);
        }     
    }
    return answer;
}