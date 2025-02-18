/**
 * Author: omteja04
 * Created on: 15-02-2025 17:37:01
 * Description: C_Reducing_Fractions
 **/

#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
using ll = long long;
const ll N = 1e7 + 9;
ll spf[N];
ll binPowerRec(ll x, ll y) {
    if(y == 0) {
        return 1;
    }
    ll res = binPowerRec(x, y / 2);
    res *= res;
    return (y & 1) ? 1LL * res * x : res;
}
void SPF() {
    for(ll i = 2; i < N; i++) {
        spf[i] = i;
    }
    for(ll i = 2; i * i < N; i++) {
        if(spf[i] == i) {
            for(ll j = i * i; j < N; j += i) {
                if(spf[j] == j) {
                    spf[j] = i;
                }
            }
        }
    }
}

void factorize(map<ll, ll> &factors, vector<ll> &arr) {
    for(auto &x: arr) {
        ll num = x;
        while(num > 1) {
            factors[spf[num]]++;
            num /= spf[num];
        }
    }
}
void removeCommon(map<ll, ll> common, vector<ll> &arr) {
    for(auto &x: arr) {
        ll val = x;
        while(val > 1) {
            ll prime = spf[val], cnt = 0;
            while(val % prime == 0) {
                cnt++;
                val /= prime;
            }
            cnt = min(cnt, common[prime]);
            common[prime] -= cnt;
            x /= binPowerRec(prime, cnt);
        }
    }
}
signed main() {
    SPF();

    ll n, m;
    cin >> n >> m;
    vector<ll> num(n, 0);
    vector<ll> den(m, 0);
    for(auto &it: num) {
        cin >> it;
    }
    for(auto &it: den) {
        cin >> it;
    }
    map<ll, ll> numerator, denominator, common;

    // Finding Prime Factors of numerator & denominator
    factorize(numerator, num);
    factorize(denominator, den);

    // Find common factors
    for(auto &pair: numerator) {
        ll factor = pair.first;
        ll factorOccurrence = pair.second;
        common[factor] = min(factorOccurrence, denominator[factor]);
    }

    // Reduce both numerator and denominator
    removeCommon(common, num);
    removeCommon(common, den);

    cout << n << " " << m << endl;
    for(auto &it: num) {
        cout << it << " ";
    }

    cout << "\n";

    for(auto &it: den) {
        cout << it << " ";
    }
    // cout << "\n";
}
