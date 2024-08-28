/**
 * Author: omteja04
 * Created on: 10-06-2024 03:22:22
 * Description: A_Bit
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
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s[1] == '+')
            ans++;
        else if (s[1] == '-')
            ans--;
    }

    cout << ans;
}

int main() {
    levi();
    return 0;
}