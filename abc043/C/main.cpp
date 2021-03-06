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

void solve(long long N, std::vector<long long> a) {
    std::sort(a.begin(), a.end());
    long long answer = -1;

    if (a[0] == a[N - 1]) {
        answer = 0;
    } else {
        for (int i = -100; i <= 100; i++) {
            long long sum = 0;
            for (int j = 0; j < N; j++) {
                long long distance = a[j] - i;
                sum += distance * distance;
            }
            if (answer == -1 || sum < answer) {
                answer = sum;
            }
        }
    }

    std::cout << answer << std::endl;
}

// Generated by 2.5.0 https://github.com/kyuridenamida/atcoder-tools
int main() {
    long long N;
    N = input();
    std::vector<long long> a(N);
    for(int i = 0 ; i < N ; i++){
        a[i] = input();
    }
    solve(N, std::move(a));
    return 0;
}
