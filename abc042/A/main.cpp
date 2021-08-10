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

const std::string YES = "YES";

const std::string NO = "NO";

void solve(long long A, long long B, long long C) {
    long long lengths[3] = {A, B, C};
    std::sort(lengths, lengths + 3);
    bool answer = (lengths[0] == 5 && lengths[1] == 5 && lengths[2] == 7);
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