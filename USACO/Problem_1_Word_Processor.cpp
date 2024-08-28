/**
 * Author: omteja04
 * Created on: 19-08-2024 21:25:16
 * Description: Problem_1_Word_Processor
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
    int n, k;
    cin >> n >> k;
    vector<string> arr(n);
    for (auto &ch : arr) {
        cin >> ch;
    }
    int cursor = 0;
    for (auto &ch : arr) {
        if (cursor + ch.size() > k) {
            cout << "\n";
            cursor = 0;
        }
        if (cursor != 0) {
            cout << " ";
        }
        cout << ch;
        cursor += ch.size();
    }
}

int main() {
    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout);
    levi();
    return 0;
}