/**
 * Author: omteja04
 * Created on: 04-03-2025 18:38:39
 * Problem: C_Vasya_and_Petya_s_Game
 * Link: https://codeforces.com/contest/577/problem/C
 **/

#include <bits/stdc++.h>
#include <set>
using namespace std;
using ll = long long;
#define fast_cin()                         \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);                    \
    std::cout.tie(NULL)
const int MAX = 1e4 + 1;
vector<bool> primes(MAX, true);
void SIEVE() {
    primes[0] = false;
    primes[1] = false;
    for(int i = 2; i * i <= MAX; i++) {
        if(primes[i]) {
            for(int j = i * i; j < MAX; j += i) {
                primes[j] = false;
            }
        }
    }
}
void levi() {
    ll n;
    cin >> n;
    set<ll> st;
    for(int i = 2; i <= n; i++) {
        if(primes[i] == true) {
            st.insert(i);
            ll temp = i;
            while(temp <= n) {
                st.insert(temp);
                temp *= i;
            }
        }
    }
    if(st.size() == 0) {
        cout << 0;
        return;
    }
    cout << st.size() << "\n";
    for(auto &it: st) {
        cout << it << " ";
    }
}

int main() {
    fast_cin();
    SIEVE();
    levi();

    cout << '\n';
    return 0;
}
