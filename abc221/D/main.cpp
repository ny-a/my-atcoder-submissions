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

void solve(long long N, std::vector<long long> A, std::vector<long long> B) {
    std::map<long long, long long> up;
    std::map<long long, long long> down;

    for (unsigned int i = 0; i < N; i++) {
        long long start = A[i];
        long long end = A[i] + B[i];
        if (up.count(start) == 0) {
            up.insert(std::make_pair(start, 1));
        } else {
            up[start]++;
        }
        if (down.count(end) == 0) {
            down.insert(std::make_pair(end, 1));
        } else {
            down[end]++;
        }
    }

    std::vector<long long> answers(N + 1, 0);

    auto u = up.begin();
    auto d = down.begin();
    int current = 0;
    int prev_day = 0;

    while (u != up.end() || d != down.end()) {
        if (u == up.end()) {
            long long current_day = d->first;
            long long duration = current_day - prev_day;
            prev_day = current_day;
            answers[current] += duration;
            current -= d->second;
            d++;
            continue;
        }
        if (d == down.end()) {
            long long current_day = u->first;
            long long duration = current_day - prev_day;
            prev_day = current_day;
            answers[current] += duration;
            current += u->second;
            u++;
            continue;
        }

        long long up_day = u->first;
        long long down_day = d->first;
        if (up_day == down_day) {
            long long duration = up_day - prev_day;
            prev_day = up_day;
            answers[current] += duration;
            current += u->second - d->second;
            u++;
            d++;
        } else if (up_day < down_day) {
            long long duration = up_day - prev_day;
            prev_day = up_day;
            answers[current] += duration;
            current += u->second;
            u++;
        } else {
            long long duration = down_day - prev_day;
            prev_day = down_day;
            answers[current] += duration;
            current -= d->second;
            d++;
        }
    }

    for (unsigned int i = 0; i < N; i++) {
        std::cout << (i != 0 ? " " : "") << answers[i + 1];
    }
    std::cout << std::endl;
}

// Generated by 2.5.0 https://github.com/kyuridenamida/atcoder-tools
int main() {
    long long N;
    N = input();
    std::vector<long long> A(N);
    std::vector<long long> B(N);
    for(int i = 0 ; i < N ; i++){
        A[i] = input();
        B[i] = input();
    }
    solve(N, std::move(A), std::move(B));
    return 0;
}