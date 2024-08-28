/**
 * Author: omteja04
 * Created on: 17-08-2024 15:00:34
 * Description: Problem_1_Teleportation
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
    // Your code goes here
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    int A, B, X, Y;
    A = min(a, b);
    B = max(a, b);
    X = min(x, y);
    Y = max(x, y);

    int ans = abs(A - B);

    if (abs(A - X) >= ans || abs(B - Y) >= ans || abs(A - X) + abs(B - Y) >= ans) {
        cout << ans;
    } else {
        cout << abs(A - X) + abs(B - Y);
    }
}

int main() {
    freopen("teleport.in", "r", stdin);
    freopen("teleport.out", "w", stdout);
    levi();
    return 0;
}