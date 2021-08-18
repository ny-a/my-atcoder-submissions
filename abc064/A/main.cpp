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

const std::string YES = "YES";

const std::string NO = "NO";

void solve(long long r, long long g, long long b) {
    bool answer = ((r * 100 + g * 10 + b) % 4) == 0;
    std::cout << (answer ? YES : NO) << std::endl;
}

// Generated by 2.5.0 https://github.com/kyuridenamida/atcoder-tools
int main() {
    long long r;
    r = input();
    long long g;
    g = input();
    long long b;
    b = input();
    solve(r, g, b);
    return 0;
}
