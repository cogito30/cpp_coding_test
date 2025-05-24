// 배열 조각하기
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    vector<int> answer;
    for (int i = 0; i < query.size(); ++i) {
        if (i % 2 == 0) {
            arr = vector<int>(arr.begin(), arr.begin() + query[i] + 1);
        } else {
            arr = vector<int>(arr.begin() + query[i], arr.end());
        }
    }
    answer = arr;
    return answer;
}

