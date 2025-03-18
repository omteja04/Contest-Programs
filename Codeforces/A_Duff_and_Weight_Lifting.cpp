/**
 * Author: omteja04
 * Created on: 17-03-2025 19:00:02
 * Problem: A_Duff_and_Weight_Lifting
 * Link: https://codeforces.com/problemset/problem/587/A
 **/

#include <bits/stdc++.h>
#include <vector>
using namespace std;
using ll = long long;
#define fast_cin()                         \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);                    \
    std::cout.tie(NULL)

const int MAX = 1e6 + 1000;
void levi() {
    int n;
    cin >> n;
    vector<int> freq(MAX, 0);
    for(int i = 0; i < n; i++) {
        int it;
        cin >> it;
        freq[it]++;
    }
    int ans = 0;
    for(int i = 0; i < MAX - 2; i++) {
        freq[i + 1] += freq[i] / 2;
        ans += freq[i] % 2;
    }
    cout << ans;
}

int main() {
    fast_cin();
    int tc = 1;
    // cin >> tc;
    while(tc--) {
        levi();
        cout << '\n';
    }
    return 0;
}
