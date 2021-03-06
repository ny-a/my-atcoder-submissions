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

void solve(long long H, long long W, long long N, std::vector<long long> A, std::vector<long long> B) {
    std::vector<long long> a_sorted(A);
    std::sort(a_sorted.begin(), a_sorted.end());
    a_sorted.erase(std::unique(a_sorted.begin(), a_sorted.end()), a_sorted.end());

    std::vector<long long> b_sorted(B);
    std::sort(b_sorted.begin(), b_sorted.end());
    b_sorted.erase(std::unique(b_sorted.begin(), b_sorted.end()), b_sorted.end());

    std::map<long long, int> a_rank;

    for (unsigned int i = 0; i < a_sorted.size(); i++) {
        a_rank.insert(std::make_pair(a_sorted[i], i + 1));
    }

    std::map<long long, int> b_rank;

    for (unsigned int i = 0; i < b_sorted.size(); i++) {
        b_rank.insert(std::make_pair(b_sorted[i], i + 1));
    }

    for (int i = 0; i < N; i++) {
        std::cout << a_rank.at(A[i]) << " " << b_rank.at(B[i]) << "\n";
    }
}

// Generated by 2.5.0 https://github.com/kyuridenamida/atcoder-tools
int main() {
    long long H;
    H = input();
    long long W;
    W = input();
    long long N;
    N = input();
    std::vector<long long> A(N);
    std::vector<long long> B(N);
    for(int i = 0 ; i < N ; i++){
        A[i] = input();
        B[i] = input();
    }
    solve(H, W, N, std::move(A), std::move(B));
    return 0;
}
