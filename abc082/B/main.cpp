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

void solve(std::string s, std::string t) {
    std::sort(s.begin(), s.end());
    std::sort(t.rbegin(), t.rend());

    bool answer = (s.compare(t) < 0);
    std::cout << (answer ? YES : NO) << std::endl;
}

// Generated by 2.5.0 https://github.com/kyuridenamida/atcoder-tools
int main() {
    std::string s = input();
    std::string t = input();
    solve(s, t);
    return 0;
}
