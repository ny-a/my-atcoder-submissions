#include <algorithm>
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

void solve(int N, std::vector<int> cards) {
    std::sort(cards.rbegin(), cards.rend());

    long long alice = 0;
    long long bob = 0;
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            alice += cards[i];
        } else {
            bob += cards[i];
        }
    }
    long long answer = alice - bob;

    std::cout << answer << "\n";
}

// Generated by 2.3.1 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can
// remove this line by using your custom template)
int main() {
    int N = input();
    std::vector<int> cards(N);
    for (auto&& card : cards) {
        card = input();
    }
    solve(N, cards);
    return 0;
}
