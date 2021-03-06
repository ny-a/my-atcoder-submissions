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

void solve(std::string A, std::string B) {

    std::string answer = "EQUAL";

    if (A.size() > B.size()) {
        answer = "GREATER";
    } else if (A.size() < B.size()) {
        answer = "LESS";
    } else {
        if (A.compare(B) > 0) {
            answer = "GREATER";
        } else if (A.compare(B) < 0) {
            answer = "LESS";
        }
    }
    std::cout << answer << std::endl;
}

// Generated by 2.5.0 https://github.com/kyuridenamida/atcoder-tools
int main() {
    std::string A = input();
    std::string B = input();
    solve(A, B);
    return 0;
}
