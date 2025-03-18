/**
 * Author: omteja04
 * Created on: 13-03-2025 18:36:33
 * Problem: A_Phoenix_and_Balance
 * Link: https://codeforces.com/problemset/problem/1348/A
 **/

#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
using ll = long long;
#define fast_cin()                         \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);                    \
    std::cout.tie(NULL)

void levi() {
    int n;
    cin >> n;
    int leftSum = 1 << n;
    for(int i = 1; i < n / 2; i++) {
        leftSum += (1 << i);
    }
    int rightSum = 0;
    for(int i = n / 2; i < n; i++) {
        rightSum += (1 << i);
    }

    cout << leftSum - rightSum;
}

int main() {
    fast_cin();
    int tc;
    cin >> tc;
    while(tc--) {
        levi();
        cout << '\n';
    }
    return 0;
}
