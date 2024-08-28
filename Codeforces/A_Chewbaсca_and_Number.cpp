/**
 * Author: omteja04
 * Created on: 10-06-2024 03:34:33
 * Description: A_Chewbaсca_and_Number
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
    string s;
    cin >> s;
    int i;
    if (s[0] != '9') {
        i = 0;
    } else {
        i = 1;
    }
    for (; i < s.length(); i++) {
        if (s[i] - '0' >= 5) {
            s[i] = (char)('9' - s[i] + '0');
        }
    }
    cout << s;
}

int main() {
    levi();
    return 0;
}