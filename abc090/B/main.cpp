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

void solve(long long A, long long B) {
    long long answer = 0;
    for (int i = A / 100; i <= (B / 100); i++) {
        int candidate = (i * 100) + (((i / 10) % 10) * 10) + (i / 100);
        if (A <= candidate && candidate <= B) {
            answer++;
        }
    }
    std::cout << answer << std::endl;
}

// Generated by 2.5.0 https://github.com/kyuridenamida/atcoder-tools
int main() {
    long long A;
    A = input();
    long long B;
    B = input();
    solve(A, B);
    return 0;
}
