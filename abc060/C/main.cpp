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

void solve(long long N, long long T, std::vector<long long> t) {
    long long answer = 0;
    long long stopTime = 0;

    for (long long const& pushedTime: t) {
        answer += T;
        long long duplicatedDuration = stopTime - pushedTime;
        if (0 < duplicatedDuration) {
            answer -= duplicatedDuration;
        }
        stopTime = pushedTime + T;
    }

    std::cout << answer << std::endl;
}

// Generated by 2.5.0 https://github.com/kyuridenamida/atcoder-tools
int main() {
    long long N;
    N = input();
    long long T;
    T = input();
    std::vector<long long> t(N);
    for(int i = 0 ; i < N ; i++){
        t[i] = input();
    }
    solve(N, T, std::move(t));
    return 0;
}