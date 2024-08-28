/**
 * Author: omteja04
 * Created on: 17-07-2024 20:13:41
 * Description: Binary_Conversion
 **/

#pragma G++ optimize("Ofast")
#pragma G++ target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma G++ optimize("unroll-loops")

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<int> v32;
typedef vector<ll> v64;
typedef vector<bool> vb;
typedef vector<vector<int>> vv32;
typedef vector<vector<ll>> vv64;
typedef vector<vector<bool>> vvb;
typedef vector<p32> vp32;
typedef vector<p64> vp64;
typedef vector<vector<p64>> vvp64;

#define cinArr(n, arr)         \
    for (ll i = 0; i < n; i++) \
    cin >> arr[i]
#define coutArr(n, arr)        \
    for (ll i = 0; i < n; i++) \
    cout << arr[i] << ' '
#define forN(i, n) for (ll i = 0; i < n; i++)
#define forAB(i, a, b) for (ll i = a; i <= b; i++)
#define rFN(i, n) for (ll i = n; i >= 0; i--)
#define rFAB(i, b, a) for (ll i = b; i >= a; i--)
#define all(x) (x).begin(), (x).end()
#define middle low + (high - low) / 2
#define PB push_back
#define MP make_pair
#define FI first
#define SE second
#define boo cout << "Boo" << '\n'
#define YES cout << "YES"
#define NO cout << "NO"

const int MOD = 1000000007;
#define PI 3.14

#define debug(x) cerr << (#x) << " = " << (x) << '\n'
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define tc    \
    int t;    \
    cin >> t; \
    while (t--)

void levi() {
    ll n, k;
    cin >> n >> k;
    string a, b;
    // A -> B
    cin >> a >> b;
    p64 aCnt = {0, 0};
    p64 bCnt = {0, 0};
    for (int i = 0; i < n; i++) {
        if (a[i] == '0') {
            aCnt.first++;
        } else if (a[i] == '1') {
            aCnt.second++;
        }
        if (b[i] == '0') {
            bCnt.first++;
        } else if (b[i] == '1') {
            bCnt.second++;
        }
    }

    if (a == b && (a == "01" || a == "10") && k % 2 == 1) {
        NO;
        return;
    }

    if (aCnt.first != bCnt.first || aCnt.second != bCnt.second) {
        NO;
        return;
    }

    if (n == 2) {
        if ((a == b) || (a != b && k % 2 != 0)) {
            cout << "YES";
        } else {
            cout << "NO";
        }
        return;
    }
    
    ll diffCnt = 0;
    forN(i, n) {
        if (a[i] != b[i]) {
            diffCnt++;
        }
    }
    if (k >= diffCnt / 2) {
        YES;
    } else {
        NO;
    }
}

int main() {
    fast_cin();

    tc {
        levi();
        cout << '\n';
    }
    return 0;
}