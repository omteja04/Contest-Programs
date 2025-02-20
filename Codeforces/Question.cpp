/**
 * Author: omteja04
 * Created on: 18-02-2025 18:10:20
 * Description: Question
 **/

#include <algorithm>
#include <climits>
#include <iostream>
#include <map>

using ll = long long;
using namespace std;
map<ll, ll> primeFactorization(ll k) {
    map<ll, ll> factors;
    for(int i = 2; i * i <= k; i++) {
        while(k % i == 0) {
            factors[i]++;
            k /= i;
        }
    }
    if(k > 1) {
        factors[k]++;
    }
    return factors;
}
ll countNoOfFactors(ll n, ll p) {
    ll cnt = 0;
    while(n) {
        n /= p;
        cnt += n;
    }
    return cnt;
}

void levi() {
    ll n, k;
    cin >> n >> k;
    map<ll, ll> factors = primeFactorization(k);
    ll maxi = INT_MAX;
    for(auto &factor: factors) {
        ll p = factor.first;
        ll a = factor.second;
        ll cnt = countNoOfFactors(n, p);
        maxi = min(maxi, cnt / a);
    }
    cout << maxi;
}
int main() {
    ll q;
    cin >> q;
    while(q--) {
        levi();
        cout << "\n";
    }
}
