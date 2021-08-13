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

const std::string YES = "Yes";

const std::string NO = "No";

void solve(long long A, long long B, long long C) {

    bool answer = A <= C && C <= B;
    std::cout << (answer ? YES : NO) << std::endl;
}

// Generated by 2.5.0 https://github.com/kyuridenamida/atcoder-tools
int main() {
    long long A;
    A = input();
    long long B;
    B = input();
    long long C;
    C = input();
    solve(A, B, C);
    return 0;
}
