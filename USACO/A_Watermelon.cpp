/**
 * Author: omteja04
 * Created on: 17-08-2024 21:47:33
 * Description: A_Watermelon
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
    int n;
    cin >> n;
    if (n < 4) {
        cout << "NO";
        return;
    }
    n -= 2;
    if (n & 1)
        cout << "NO";
    else
        cout << "YES";
}

int main() {
    levi();
    return 0;
}