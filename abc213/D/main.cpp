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

bool dfs(std::vector<std::vector<int>> const& graph, std::vector<bool>& visited, int current_country) {
    visited[current_country] = true;

    for (auto next_country: graph[current_country]) {
        if (visited[next_country]) {
            continue;
        }

        std::cout << " " << next_country + 1;
        bool result = dfs(graph, visited, next_country);
        if (result) {
            return true;
        } else {
            std::cout << " " << current_country + 1;
        }
    }

    return (current_country == 0);
}

void solve(int N, std::vector<int> A, std::vector<int> B) {
    std::vector<bool> visited(N, false);
    std::vector<std::vector<int>> graph(N, std::vector(0, 0));

    for (int i = 0; i < N - 1; i++) {
        graph[A[i] - 1].emplace_back(B[i] - 1);
        graph[B[i] - 1].emplace_back(A[i] - 1);
    }

    for (int i = 0; i < N; i++) {
        std::sort(graph[i].begin(), graph[i].end());
    }

    std::cout << "1";
    dfs(graph, visited, 0);

    std::cout << std::endl;
}

// Generated by 2.5.0 https://github.com/kyuridenamida/atcoder-tools
int main() {
    int N;
    N = input();
    std::vector<int> A(N-1);
    std::vector<int> B(N-1);
    for(int i = 0 ; i < N-1 ; i++){
        A[i] = input();
        B[i] = input();
    }
    solve(N, std::move(A), std::move(B));
    return 0;
}
