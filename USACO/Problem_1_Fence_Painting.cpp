/**
 * Author: omteja04
 * Created on: 17-08-2024 14:19:59
 * Description: Problem_1_Fence_Painting
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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int minR = min(b, d);
    int maxL = max(a, c);
    if(minR < maxL) { 
        cout << b - a + d - c;
    } else {
        cout << max(b, d) - min(a, c);
    }
}

int main() {
    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);
    levi();
    return 0;
}