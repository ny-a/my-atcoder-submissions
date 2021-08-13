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

void solve(std::string s) {
    int first = std::distance(s.begin(), std::find(s.begin(), s.end(), 'A'));
    int last = std::distance(s.rbegin(), std::find(s.rbegin(), s.rend(), 'Z'));
    int answer = (s.length() - last) - first;

    std::cout << answer << std::endl;
}

// Generated by 2.5.0 https://github.com/kyuridenamida/atcoder-tools
int main() {
    std::string s = input();
    solve(s);
    return 0;
}