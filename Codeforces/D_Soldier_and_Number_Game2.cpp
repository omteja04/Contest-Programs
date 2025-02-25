/**
 * Author: omteja04
 * Created on: 20-02-2025 23:19:57
 * Problem: D_Soldier_and_Number_Game2
 **/

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
const int MAX = 5000001;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
vector<int> spf(MAX);
vector<int> primeFactorsCnt(MAX, 0);
vector<ll> primeFactorsPrefix(MAX, 0);

void SPF() {

    spf[0] = 0;
    spf[1] = 0;
    primeFactorsCnt[0] = 0;
    primeFactorsCnt[1] = 0;
    for(int i = 2; i < MAX; i++) {
        spf[i] = i;
    }

    for(int i = 2; i * i < MAX; i++) {
        if(spf[i] == i) {
            for(int j = i * i; j < MAX; j += i) {
                if(spf[j] == j) {
                    spf[j] = i;
                }
            }
        }
    }
    for(int i = 2; i < MAX; i++) {
        primeFactorsCnt[i] = primeFactorsCnt[i / spf[i]] + 1;
        primeFactorsPrefix[i] = primeFactorsPrefix[i - 1] + primeFactorsCnt[i];
    }
}
void levi() {
    ll a, b;
    cin >> a >> b;
    cout << primeFactorsPrefix[a] - primeFactorsPrefix[b];
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
