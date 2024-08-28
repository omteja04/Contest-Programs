/**
 * Author: omteja04
 * Created on: 03-04-2024 20:25:37
 * Description: MEXimize_the_Array
 **/

#pragma G++ optimize("Ofast")
#pragma G++ target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma G++ optimize("unroll-loops")

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define middle low + (high - low) / 2
#define PB push_back
#define F first
#define S second
#define boo cout << "Boo" << '\n'
#define YES cout << "YES"
#define NO cout << "NO"
#define pi 3.14
const int MOD = 1000000007;
#define debug(x) cerr << (#x) << " = " << (x) << '\n'
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
void teja() {
    ll n;
    cin >> n;
    vector<ll> nums;
    nums.reserve(n);
    for (ll i = 0; i < n; i++) {
        ll num;
        cin >> num;
        nums.push_back(num);
    }

    sort(nums.begin(), nums.end());
    ll max_mex = 0;
    for (ll i = 0; i < n; i++) {
        if (nums[i] > max_mex) {
            break;
        }
        max_mex++;
    }

    ll operations = 0;
    for (ll i = 0; i < n; i++) {
        if (i != nums[i]) {
            operations = operations + abs(i - nums[i]);
        }
    }
    cout << operations;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    tc {
        teja();
        cout << '\n';
    }
    return 0;
}