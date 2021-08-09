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

void solve(std::vector<std::string> s) {
    std::cout << static_cast<char>(s[0][0] - 'a' + 'A') << static_cast<char>(s[1][0] - 'a' + 'A') << static_cast<char>(s[2][0] - 'a' + 'A') << std::endl;
}

// Generated by 2.5.0 https://github.com/kyuridenamida/atcoder-tools
int main() {
    std::vector<std::string> s(3);
    for(int i = 0 ; i < 3 ; i++){
        s[i] = static_cast<std::string>(input());
    }
    solve(std::move(s));
    return 0;
}