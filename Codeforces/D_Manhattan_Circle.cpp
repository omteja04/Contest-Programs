/**
 * Author: omteja04
 * Created on: 11-06-2024 21:16:11
 * Description: D_Manhattan_Circle
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
    int m, n;
    cin >> m >> n;
    vector<vector<char>> grid(m, vector<char>(n));
    int top = -1, bottom = -1, left = -1, right = -1;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == '#') {
                if (top == -1) {
                    top = i;
                }
                bottom = i;
                if (left == -1 || j < left) {
                    left = j;
                }
                if (right == -1 || j > right) {
                    right = j;
                }
            }
        }
    }
    int centerX = (top + bottom) / 2;
    int centerY = (left + right) / 2;

    cout << centerX + 1 << " " << centerY + 1;
}

int main() {
    fast_cin();

    tc {
        levi();
        cout << '\n';
    }
    return 0;
}