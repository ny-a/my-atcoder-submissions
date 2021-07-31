#include <algorithm>
#include <atcoder/all>
#include <bitset>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <deque>
#include <fstream>
#include <functional>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>

struct input {
    template <class T> operator T() {
        T t;
        std::cin >> t;
        return t;
    }
};

void solve(long long N, long long M, std::vector<long long> A,
           std::vector<long long> B) {
    std::sort(A.begin(), A.end());
    std::sort(B.begin(), B.end());

    auto a = 0;
    auto b = 0;
    long long min_distance = -1;

    while (a < N && b < M) {
        long long distance = std::abs(A[a] - B[b]);
        if (min_distance == -1 || distance < min_distance) {
            min_distance = distance;
        }
        if (A[a] < B[b]) {
            a++;
        } else {
            b++;
        }
    }

    std::cout << min_distance << std::endl;
}

// Generated by 2.5.0 https://github.com/kyuridenamida/atcoder-tools
int main() {
    long long N;
    N = input();
    long long M;
    M = input();
    std::vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        A[i] = input();
    }
    std::vector<long long> B(M);
    for (int i = 0; i < M; i++) {
        B[i] = input();
    }
    solve(N, M, std::move(A), std::move(B));
    return 0;
}
