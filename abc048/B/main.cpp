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

void solve(long long a, long long b, long long x) {
    long long a_divided = a / x;
    long long before_a = a_divided * x;

    bool include_a = a == before_a;

    long long b_divided = b / x;

    long long answer = b_divided - a_divided + (include_a ? 1 : 0);

    std::cout << answer << std::endl;
}

// Generated by 2.5.0 https://github.com/kyuridenamida/atcoder-tools
int main() {
    long long a;
    a = input();
    long long b;
    b = input();
    long long x;
    x = input();
    solve(a, b, x);
    return 0;
}
