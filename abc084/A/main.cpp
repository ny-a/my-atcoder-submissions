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

void solve(long long M) {

    long long answer = 24 + (24 - M);
    std::cout << answer << std::endl;
}

// Generated by 2.5.0 https://github.com/kyuridenamida/atcoder-tools
int main() {
    long long M;
    M = input();
    solve(M);
    return 0;
}
