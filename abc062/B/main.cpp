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

void solve(int H, int W, std::vector<std::string> picture) {

    for (int i = 0; i < W + 2; i++) {
        std::cout << "#";
    }
    std::cout << "\n";

    for (int i = 0; i < H; i++) {
        std::cout << "#" << picture[i] << "#\n";
    }

    for (int i = 0; i < W + 2; i++) {
        std::cout << "#";
    }
    std::cout << "\n";
}

// Generated by 2.5.0 https://github.com/kyuridenamida/atcoder-tools
int main() {
    int H = input();
    int W = input();
    std::vector<std::string> picture(H);
    for (auto&& line: picture) {
        line = static_cast<std::string>(input());
    }
    solve(H, W, std::move(picture));
    return 0;
}