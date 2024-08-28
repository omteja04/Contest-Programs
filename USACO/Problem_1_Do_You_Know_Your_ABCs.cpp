/**
 * Author: omteja04
 * Created on: 17-08-2024 23:25:56
 * Description: Problem_1_Do_You_Know_Your_ABCs
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
    int arr[7];
    for (int i = 0; i < 7; i++)
        cin >> arr[i];
    sort(arr, arr + 7);
    int a = arr[0];
    // cout << a << " ";
    int abc = arr[6];
    int bc = abc - a;
    int ac;

    if (bc == arr[5]) {
        ac = arr[4];
    } else {
        ac = arr[5];
    }
    int c = ac - a;
    cout << a << " " << abc - a - c << " " << c;
}

int main() {
    levi();
    return 0;
}