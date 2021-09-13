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

void solve(long long N, std::vector<long long> l, std::vector<long long> r) {
    long long answer = 0;

    for (int i = 0; i < N; i++) {
        answer += r[i] - l[i] + 1;
    }

    std::cout << answer << std::endl;
}

// Generated by 2.5.0 https://github.com/kyuridenamida/atcoder-tools
int main() {
    long long N;
    N = input();
    std::vector<long long> l(N);
    std::vector<long long> r(N);
    for(int i = 0 ; i < N ; i++){
        l[i] = input();
        r[i] = input();
    }
    solve(N, std::move(l), std::move(r));
    return 0;
}