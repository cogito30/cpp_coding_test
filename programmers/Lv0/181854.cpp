// 배열의 길이에 따라 다른 연산하기
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    vector<int> answer;
    if (arr.size() % 2 == 1) {
        for (int i = 0; i < arr.size(); ++i) {
            if (i % 2 == 0) {
                arr[i] += n;
            }
        }
    } else {
        for (int i = 0; i < arr.size(); ++i) {
            if (i % 2 == 1) {
                arr[i] += n;
            }
        }
    }
    answer = arr;
    return answer;
}