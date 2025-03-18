/**
 * Author: omteja04
 * Created on: 18-03-2025 18:04:55
 * Problem: D_Bracket_Coloring
 * Link: https://codeforces.com/problemset/problem/1837/D
 **/

#include <bits/stdc++.h>
#include <stack>
#include <vector>
using namespace std;
using ll = long long;
#define fast_cin()                         \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);                    \
    std::cout.tie(NULL)

void levi() {
    ll n;
    cin >> n;
    string str;
    cin >> str;
    ll len = str.length();
    ll openCount = count(str.begin(), str.end(), '(');
    ll closeCount = n - openCount;
    if(openCount != closeCount) {
        cout << -1 << '\n';
        return;
    }
    bool usedOne = false;
    bool usedTwo = false;
    vector<ll> arr(n,0);
    stack<int> stk;
    for(ll i = 0; i < n; i++) {
        if(stk.empty() || str[stk.top()] == str[i]) {
            stk.push(i);
            continue;
        }
        ll idx = stk.top();
        if(str[idx] == '(') {
            arr[idx] = 1;
            arr[i] = 1;
            usedOne = true;
        } else {
            arr[idx] = 2;
            arr[i] = 2;
            usedTwo = true;
        }
        stk.pop();
    }
    if(usedOne && usedTwo) {
        cout << 2 << "\n";
        for(auto &it: arr) {
            cout << it << " ";
        }
    } else if(usedOne || usedTwo) {
        cout << 1 << "\n";
        for(ll i = 0; i < n; i++) {
            cout << 1 << " ";
        }
    }
}

int main() {
    fast_cin();
    int tc = 1;
    cin >> tc;
    while(tc--) {
        levi();
        cout << '\n';
    }
    return 0;
}
