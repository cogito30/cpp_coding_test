// 웰컴 키트
#include <iostream>

int main(int argc, char** argv) {
    int N;
    int* arr = new int[N];
    int T, P;
    std::cin >> N;
    for (int i = 0; i < N; ++i) {
        std::cin >> arr[i];
    }
    std::cin >> T >> P;

    

    delete[] arr;

    return 0;
}