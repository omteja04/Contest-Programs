/**
 * Author: omteja04
 * Created on: 20-02-2025 17:23:19
 * Problem: D_Soldier_and_Number_Game
 **/

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
using namespace std;
using ll = long long;
long long MAX = 5e6 + 1;
vector<ll> primeFactorsCnt(MAX + 1, 0);
vector<bool> isPrime(MAX + 1, true);
void SPF() {
    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i <= MAX; i++) {
        if(isPrime[i]) {
            for(int j = i; j <= MAX; j += i) {
                isPrime[j] = false;
                ll num = j;
                while(num % i == 0) {
                    primeFactorsCnt[j]++;
                    num /= i;
                }
            }
        }
    }
    for(int i = 1; i <= MAX; i++) {
        primeFactorsCnt[i] += primeFactorsCnt[i - 1];
    }
}
void levi() {
    ll a, b;
    cin >> a >> b;
    cout << primeFactorsCnt[a] - primeFactorsCnt[b];
}
int main() {
    fast_io;
    ll q;
    cin >> q;
    SPF();
    while(q--) {
        levi();
        cout << "\n";
    }
}
