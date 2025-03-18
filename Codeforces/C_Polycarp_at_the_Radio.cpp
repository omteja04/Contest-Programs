/**
 * Author: omteja04
 * Created on: 18-03-2025 17:33:31
 * Problem: C_Polycarp_at_the_Radio
 * Link: https://codeforces.com/problemset/problem/723/C
 **/

#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;
using ll = long long;
#define fast_cin()                         \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);                    \
    std::cout.tie(NULL)

void levi() {
    int n, m;
    cin >> n >> m;
    vector<ll> arr(n);
    for(auto &it: arr) {
        cin >> it;
    }
    int best = n / m;

    vector<int> canChange;
    unordered_map<ll, ll> mp;
    for(int i = 0; i < n; i++) {
        if(arr[i] > m) {
            canChange.push_back(i);
        } else {
            if(mp[arr[i]] == best) {
                canChange.push_back(i);
            } else {
                mp[arr[i]]++;
            }
        }
    }
    ll cnt = 0;
    for(int i = 1; i <= m; i++) {
        while(mp[i] < best) {
            arr[canChange.back()] = i;
            mp[i]++;
            canChange.pop_back();
            cnt++;
        }
    }
    cout << best << " " << cnt << "\n";
    for(auto &it: arr) {
        cout << it << " ";
    }
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
