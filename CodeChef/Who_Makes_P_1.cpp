/**
 * Author: omteja04
 * Created on: 29-05-2024 20:08:14
 * Description: Who_Makes_P_1
 **/

#include <bits/stdc++.h>
#define boo cout << "Boo" << '\n'
using namespace std;
typedef long long ll;
#define cinArr(n, arr)         \
    for (ll i = 0; i < n; i++) \
    cin >> arr[i]
#define coutArr(n, arr)        \
    for (ll i = 0; i < n; i++) \
    cout << arr[i] << ' '

void levi() {
    int a, b;
    cin >> a >> b;
    if (a <= b) {
        cout << "Tyro";
    } else {
        cout << "Dom";
    }
}

int main() {
    levi();
    return 0;
}