/**
 * Author: omteja04
 * Created on: 17-08-2024 21:51:11
 * Description: A_Team
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
    int cnt = 0;
    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b + c >= 2)
            cnt++;
    }
    cout << cnt;
}

int main() {
    levi();
    return 0;
}