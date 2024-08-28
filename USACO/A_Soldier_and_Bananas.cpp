/**
 * Author: omteja04
 * Created on: 17-08-2024 21:57:09
 * Description: A_Soldier_and_Bananas
 **/

#include <bits/stdc++.h>
#define boo cout << "Boo" << '\n'
using namespace std;
#define cinArr(n, arr)         \
    for (ll i = 0; i < n; i++) \
    cin >> arr[i]
#define coutArr(n, arr)        \
    for (ll i = 0; i < n; i++) \
    cout << arr[i] << ' '
using ll = long long;
using v32 = vector<int>;
const int MOD = 1000000007;

void levi() {
    int k, n, w;
    cin >> k >> n >> w;
    ll sum = k * ((w * (w + 1)) >> 1);
    if(sum > n) {
        cout << sum - n;
    } else {
        cout << 0;
    }
}

int main() {
    levi();
    return 0;
}